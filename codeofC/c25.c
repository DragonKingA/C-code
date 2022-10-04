#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void GetSum(int a,int b,int *sum){
    *sum = a+b;
}

void main(){
    int numarr[10]={1,2,3,4,5,6,7};
    char w[] = {'H','e','l','l','o','!'};//一个字符数组，w[0]='H' ~ w[5]='!',长度为6
    char w1[]={'H','e','l','l','o','!','\0'};//一个可以进行字符串运算(可使用 库string.h中函数)的字符数组
    //是否可以当作字符串进行运算，其标志就是 字符数组 的 尾部 是否以 '\0' 或 整数0 结尾（但不是字'0'）
    //w1[0]='H' ~ w1[6]='\0'，长度为7，***但数组尾部'\0'或整数0不包括于字符串长度
    printf("w1[6]=%c\n",w1[6]);//不输出任何东西
    
    char *pp1 = w1;//数组本身表达地址，无需&w1
    char *pp2 = &w1[1];//而数组单元表达变量，需要&取地址

    char * const pp3 = &w1[2];//* const表示指针pp3指向的地址不会改变,即pp3自身不变,但不影响改变*pp3和w1[2]的值
    const char *pp4 = &w1[4];//const *表示能改变pp4指向的地址 但不能通过指针pp4来改变*pp4的值，只能直接改变w1[4]的值。
    //上句等效于char const *pp4 = &w1[4],看谁被const修饰只需看 * 和 const两者的相对位置,char的位置不影响
    //两种情况：1.* const说明指针自身不能被修改 2.const *说明不能通过指针修改指向的变量
    //void f(const char *p);这样的函数对传入的参数 只读值，不修改 ，对参数本身很安全
    pp4 = &w1[5];

    //数组变量本身被const修饰，即对于int arr1[4],arr2[5];不能进行 arr1 = arr2 的赋值
    //倘若定义时又加上const，则表示对数组中每个单元（元素）用const修饰，使所有元素不可改变，变成常量数组
    const int arrn[4] ={1,2,3,4};//唯一改变其中元素的时候只有现在初始定义时将其赋值为1，2，3，4
    //所以void f(const int a[]);能保护传入的数组其中变量不被改变

    char str[]="Hello,world!";//长度为13，
    //所以定义char数组时，其字面量是字符串时，编译器会自动在字符串最后补上'\0'，且占位
    //***故一定要注意，用char数组接收字符串时要多预留 1个长度 为字符串标识符预留空间!!!!!!!!!!!!!
    printf("str[12]=%c\n",str[12]);//不输出任何东西,但索引12位置的空间已被占用
    char str2[]="Hello,world!";
    char *s="Hello,world!";
    char *s2="Hello,world!";
    char *s3=str;
    char *s_t;
    s_t = s;//将s的地址赋给s_t，此时s_t指向s的空间，可以通过两者对同一内存修改或访问
    //s[0]='M';由于 *s 的属性为只读（const），所以强行修改使程序出错停运
    int num=123;
    int *i1=&num;
    int *i2;
    //32位里，指针（或地址）占4个字节空间
    //通过指针保存其他函数的运算结果

    //指针运算:
    printf("指针i1=%p\n",i1);
    printf("指针(i1+1)=%p\n",i1+1);//比i1地址多了4,与i1++同理
    printf("指针(i1+2)=%p\n",i1+2);//比i1地址多了8
    //指针的直接运算，其实是i1+sizeof(int)*N,上述两句分别为N=1和N=2
    printf("指针s=%p\n",s);
    printf("指针(s+1)=%p\n",s+1);//比s地址值多1
    //这里是s+sizeof(char)*N (N=1)
    //所以指针运算时是依据其指向的数据类型占据的字节数变化的
    int *pp5=&numarr[0];
    int *pp6=&numarr[3];
    printf("指针numarr[3]-numarr[0]=%d\n",pp6-pp5);//3,说明两者地址间有3个int空间
    //指针求差值 = 地址差 / sizeof(数组数据类型)

    int sum1;
    GetSum(100,99,&sum1);
    printf("指针保存的结果sum1 = %d\n",sum1);//199
    //
    /*
    为什么 定义指针要么定义时就指向一个具体空间（赋具体值），要么就赋其NULL或0 ：
    指针定义时没有如此做，就会随意乱指向一个空间，甚至可能指向关键内存
    操作不当造成的野指针，甚至会引起系统死机等比较严重的后果。 　
    如果程序定义了一个指针，就必须要立即让它指向一个我们设定的空间或者把它设为NULL，
    如果没有这么做，那么这个指针里的内容是不可预知的，即不知道它指向内存中的哪个空间（即野指针），
    它有可能指向的是一个空白的内存区域，可能指向的是已经受` 保护的区域，甚至可能指向系统的关键内存，
    如果是那样就糟了，也许我们后面不小心对指针进行操作就有可能让系统出现紊乱，死机了。
    某种情况：指针p被free或者delete之后，没有置为NULL，让人误以为p是个合法的指针。
             -free,delete它们只是把指针所指的内存给释放掉，但并没有把指针本身干掉,野指针仍存在
    */

    printf("str=%p\n",str);
    printf("str2=%p\n",str2);
    printf("s=%p\n",s);
    printf("s_t=%p\n",s_t);
    printf("s[0]=%c，s[1]=%c\n",s[0],s[1]);//H,e
    printf("s2=%p\n",s2);
    //s2的地址由一个 数组变量 提供，所以该指针不会与其他 同值指针 指向同一空间
    printf("s3=%p\n",s3);
    //具有 相同变量值 的 不同数组变量 指向 不同的地址，这不同于指针
    printf("i1=%p\n",i1);
    printf("i2=%p\n",i2);
    //s=00007ff7f2eb3000
    //s2=00007ff7f2eb3000
    //当字符指针 s和s2 被初始化为 相同的值 时，两者指向 相同的地址
    //这两者地址位于内存中的 代码段，且该区域 只读
    //实际上当 char指针 *s 被初始化为 具体的字符串常量 时，
    //其定义为 const char *s ,即此时编译器内部会为指针附上 const 修饰符

    //多个scanf读入数据时，每个scanf以到空格，tab或回车为止
    char word[10];
    char word2[10];
    //scanf("%s",word);//但用scanf和%s时不安全的，可能超过word的长度,会发生后续的输出错误和程序崩溃
    //scanf("%7s",word);
    //scanf("%7s",word2);
    //一行输入123456789时，第一个scanf接收前7个字符结束，第二个scanf继续接收后面7个字符，接收完为止
    // printf("%s\n",word);//1234567
    // printf("%s\n",word2);//89

    char buffer[100] = "";//这是一个长度为 100 的空字符串，buffer[0] = '\0'
    char buffer0[]="";//这是一个长度被定义为 1 的空字符串，buffer0[0] = '\0'


    //malloc动态内存分配：解决不能用变量定义数组大小的问题
    int size=1;
    int *array = 0;//指针定义好习惯，赋予0初始值
    //printf("请输入int型数组的大小：");
    //scanf("%d",&size);
    array = (int *)malloc( size * sizeof(int) );
    //首先，malloc的参数是字节数，需要size个int 即需要开辟size*4个字节空间
    //然后，malloc返回值类型是 void * 指针，需要强转自行定义其类型，这里定义为 整型指针
    //总结：p = (类型名称)malloc( sizeof(数据类型)*n（申请数个该数据类型的空间）)
    //之后将该指针当成 整型数组 使用即可
    //malloc实质就是申请系统内存空间，若申请失败就返回0（就是NULL）

    //使用完该数组后 一定要释放空间 ！！！
    free(array);//若array是初始值0即NULL，就跟下句一样，free函数不会做事，使得程序不会出错
    free(NULL);
    //若已经free释放过的空间再free一次，程序就崩溃(除非为空指针，free多少次都不会真正执行free)
    //若free之前出现array++;或array=&s[1]等地址改变的情况，也会报错

    void *test=0;
    int cnt=0;
    while( test=malloc(100*1024*1024) ){//循环直到malloc申请失败时终止循环
        cnt++;
    }
    printf("分配了%d00MB的空间\n",cnt);//30400MB
    //程序上看到的空间是连续得，实际内存的比分配的大，因为操作系统是分页管理，实际的物理内存可能非连续


    // char *p;
    // while (1) {
    //     p = malloc(1);
    //     *p = 0;
    // }   
    //由于向空指针（指针p存放的地址为空或者说为NULL或者说为0）传值，如果没有把null地址（空地址）占用，就会一直分配空间

    char *ab[100];
    //可存放100个地址，可分别指向100个随意长度的字符串
    //scanf("%s",ab[1]);
    //printf("%s\n",ab[1]);












    //关于 string.h 中常见函数————————————————————————————————————————————————————————————————————————————————————————————————————
    //1.strlen(str) -- size_t strlen(const char *str) 
    //返回一个 字符数组或字符指针 的 字符串长度（不包括'\0'）,
    //返回值类型为 无符号长整型整数 (long unsigned) ，故用 %lu 接收
    printf("w1的strlen=%lu\n",strlen(w1));//6,因为 字符串长度 不包括其标识符'\0'
    printf("w1的sizeof=%lu\n",sizeof(w1));//7,而 数组或指针实际长度 包括标识符占据的空间


    //2.strcmp(s1,s2) -- int strcmp(const char*str1,const char *str2)
    //即string compare 比较两个字符串
    //返回整数,  s1 == s2 --> 0 , s1 > s2 --> 1 , s1 < s2 --> -1 
    char cmp1[]="abc";
    char cmp2[]="abc ";//"abc " - "abc" = 32,依ASCII值，空格 - '\0' = 32 - 0 = 32
    char cmp2_t[]="abc";
    char cmp3[]="Abc";
    printf("strcmp返回值1=%d\n",strcmp(cmp1,cmp2));//两者字符串不同，故返回-1
    printf("strcmp返回值2=%d\n",strcmp(cmp1,cmp3));//cmp1的ASCII码之和大于cmp3，故返回1
    printf("strcmp返回值3=%d\n",strcmp(cmp1,cmp2_t));//两者字符串相同，故返回0
    printf("cmp1==cmp2的返回值=%d\n",cmp1==cmp2);//判断两者地址是否相同，由于同值的不同数组变量的地址不同，则返回0


    //3.strcpy(dst,src) -- char *strcpy(char *restrict dst,const char *restrict src)
    //将src的字符串拷贝到dst中，随后函数返回dst (直接返回dst可以方便代码链接，不用另起一行对dst操作)
    //其中关键字restrict表明src和dst不重叠
    char destination[4];
    strcpy(destination,"jkl");
    printf("destination=%s\n",destination);
    char *src = "abc";
    char *dst=(char *)malloc(strlen(src) + 1);


    //4.strcat(s1,s2)
    //把s2字符串拷贝接到s1字符串尾部，变成一个长的字符串，随后函数返回s1。注意接收者s1空间必须足够大
    char s0[100]="123";
    printf("s0=%s\n",strcat(s0,cmp1));//输出"123abc"
    //该函数是从 目标字符串s1 索引位置为strlen(s1)开始拷贝，因为s1[strlen(s1)] = '\0',
    //最后s1的尾部标识'\0'是由s2拷贝而来的，而s1原来的'\0'被s2的第一个字符所覆盖


    //5.以上函数strcpy,strcat不安全，而对应安全的版本是
    //strncpy(dst,src,n) 字符串src中最多n个字符复制到字符数组dst中
    //strncat(s1,s2,n)   将字符串s2中前n个字符连接到s1中


    //6.寻找字符串中的某个字符
    //strchr(str,c) -- char *strchr(const char *s,int c)
    //从str字符串的端部开始找一个字符c

    //strrchr(str,c) -- char *strrchr(const char *s,int c)
    //从str字符串的尾部开始找一个字符c
    //没找到都会返回NULL，找到了会返回一个 指针 ，指向找到的字符的位置
    char ss[] = "Hello world";
    char *pp7 = strchr(ss,'l');
    printf("strchr=%s\n",pp7);// 输出 llo,world!
    // pp7 = strchr(pp7+1,'l');//从第二个'l'开始
    // printf("strchr=%s\n",pp7);// 输出 lo,world!

    char cr = *pp7;//暂存
    printf("ss=%s\n",ss);//ss="Hello world"
    *pp7 = '\0';
    printf("ss=%s\n",ss);//ss="He"
    // *pp7 = cr;//还原ss
    // printf("ss=%s\n",ss);//ss="Hello world"
    char *temp = (char *)malloc(strlen(ss)+1);
    strcpy(temp,ss);
    printf("temp=%s\n",temp);//"He"
    free(temp);


    //7.strstr(s1,s2) -- char *strstr(const char *s1,const char *s2)
    //区分大小写
    //strcase(s1,s2) -- char *strcasestr(const char *s1,const char *s2)
    //忽略大小写







}