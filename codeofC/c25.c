#include<stdio.h>
#include<string.h>

void main(){

    char w[] = {'H','e','l','l','o','!'};//一个字符数组，w[0]='H' ~ w[5]='!',长度为6
    char w1[]={'H','e','l','l','o','!','\0'};//一个可以进行字符串运算(可使用 库string.h中函数)的字符数组
    //是否可以当作字符串进行运算，其标志就是 字符数组 的 尾部 是否以 '\0' 或 整数0 结尾（但不是字'0'）
    //w1[0]='H' ~ w1[6]='\0'，长度为7，***但数组尾部'\0'或整数0不包括于字符串长度
    printf("w1[6]=%c\n",w1[6]);//不输出任何东西

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
    
    /*
    为什么 定义指针要么定义时就指向一个具体空间（赋具体值），要么就赋其NULL或0 ：
    指针定义时没有如此做，就会随意乱指向一个空间，甚至可能指向关键内存
    操作不当造成的野指针，甚至会引起系统死机等比较严重的后果。 　
    如果程序定义了一个指针，就必须要立即让它指向一个我们设定的空间或者把它设为NULL，
    如果没有这么做，那么这个指针里的内容是不可预知的，即不知道它指向内存中的哪个空间（即野指针），
    它有可能指向的是一个空白的内存区域，可能指向的是已经受保护的区域，甚至可能指向系统的关键内存，
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
    printf("%s\n",word);//1234567
    printf("%s\n",word2);//89


    char buffer[100] = "";//这是一个长度为 100 的空字符串，buffer[0] = '\0'
    char buffer0[]="";//这是一个长度被定义为 1 的空字符串，buffer0[0] = '\0'


    //关于 string.h 中常见函数————————————————————————————————————————————————————————————————————————————————————————————————————

    //1.strlen() 返回一个 字符数组或字符指针 的 字符串长度（不包括'\0'）,
    //返回值类型为 无符号长整型整数 (long unsigned) ，故用 %lu 接收
    printf("w1的strlen=%lu\n",strlen(w1));//6,因为 字符串长度 不包括其标识符'\0'
    printf("w1的sizeof=%lu\n",sizeof(w1));//7,而 数组或指针实际长度 包括标识符占据的空间

    //2.strcmp(s1,s2)即string compare 比较两个字符串
    //返回整数,  s1 == s2 --> 0 , s1 > s2 --> 1 , s1 < s2 --> -1 
    char cmp1[]="abc";
    char cmp2[]="abc ";//"abc " - "abc" = 32,依ASCII值，空格 - '\0' = 32 - 0 = 32
    char cmp2_t[]="abc";
    char cmp3[]="Abc";
    printf("strcmp返回值1=%d\n",strcmp(cmp1,cmp2));//两者字符串不同，故返回-1
    printf("strcmp返回值2=%d\n",strcmp(cmp1,cmp3));//cmp1的ASCII码之和大于cmp3，故返回1
    printf("strcmp返回值3=%d\n",strcmp(cmp1,cmp2_t));//两者字符串相同，故返回0
    printf("cmp1==cmp2的返回值=%d\n",cmp1==cmp2);//判断两者地址是否相同，由于同值的不同数组变量的地址不同，则返回0

    //3.strcpy(dst,src)
    //将src的字符串拷贝到dst中，随后函数返回dst
    char destination[4];
    strcpy(destination,"jkl");
    printf("destination=%s\n",destination);

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
    //strchr(str,c) 从str字符串的端部开始找一个字符c
    //strrchr(str,c)从str字符串的尾部开始找一个字符c
    //没找到都会返回NULL，找到了会返回一个 指针 ，指向找到的字符的位置


}