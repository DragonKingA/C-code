#include <stdio.h>
#include <string.h>

struct stu{
    char name[20];
    int age;
};
struct stu s[3] = {{"zhangsan", 30}, {"lisi", 34}, {"wangwu", 20}};



//函数指针：
typedef void(* fun_vi)(int);
 //对void(*)(int) 函数指针类型重命名为 fun_vi   注意写法
 //按正常理解 typedef void(*)(int) fun_vi 来写是 错误 的写法

void (* signal(int , void(*)(int)) ) (int);
//定义一个signal函数，其参数为int和void(*)(int)，其返回值为void(*)(int)
//故这是一个参数含函数指针类型且返回值为函数指针类型的函数
//按正常理解void(*)(int) signal(int , void(*)(int)); 是 错误 的写法
//结合typedef可以更直观：
fun_vi signal_simplified(int , fun_vi);

void f(void){
    printf("函数f被调用\n");
}

void f1(int num){
    printf("in f1() , num=%d\n",num);
}
void g1(int num){
    printf("in g1() , num=%d\n",num);
}
void h1(int num){
    printf("in h1() , num=%d\n",num);
}

int plus(int a,int b){
    return a+b;
}
int minus(int a,int b){
    return a-b;
}

//回调函数，其机制就是函数的参数含函数指针，可以自主选择调用的外部函数
//qsort\sort中的cmp函数参数就是回调函数
void cal(int (*pf)(int , int ) ,int n1,int n2){
    printf("cal(n1,n2): %d\n",pf(n1,n2));
}



//qsort函数  (quick sort)快速排序  可以对字符串，数组，结构体等排序
void qsort( void *base, //void*可以存入任何类型数据，这里存入待排序数据中第一个元素的地址
            size_t num, //排序数据元素的个数
            size_t width, //排序数据中一个元素的字节数大小(这样即使不知道传入数据的类型也能对每个元素定位)
            int (__cdecl *compare )(const void *elem1, const void *elem2 ) 
            //compare函数是用来比较待排序数据中两个元素的函数，且本身接收任意类型的待比较的两个元素
            );
int cmp_int(const void *e1 , const void *e2){//因为e1,e2是无类型指针，系统不知道该指针占几个字节，故要先进行强制类型转换才能使用
    return *(int *)e1 > *(int *)e2 ;//正序排列，若e1大于e2 , 则return 1 , 故e1和e2就交换
    //即return *(int *)e1 - *(int *)e2 ;
}
int cmp_struct_age(const void* e1, const void* e2){
    return ((struct stu *)e1)->age > ((struct stu *)e2)->age ;
}
int cmp_struct_name(const void* e1, const void* e2){
    return strcmp(((struct stu *)e1)->name , ((struct stu *)e2)->name) ;//升序
}
/*
cmp返回值情况：
<0  elem1 less than elem2 
==0 elem1 equivalent to elem2 
>0  elem1 greater than elem2 
*/

void main(){
    int i=0;
    int *p = &i;
    int a[]={1,2};
    printf("&i=%p\n",p);
    printf("a[]=%p\n",a);
    printf("f()=%p\n",f);
    printf("main()=%p\n",main);
/*
&i    =0000005c4d9ffce4
a[]   =000000baf9dff768
f()   =00007ff72f851591
main()=00007ff72f851598
故a,f,main这些名字都代表着各自指向的地址
而对于函数f和main，它们的地址相近。
当我们尝试 p = f，将f指向的地址值赋给一个指针，会报错：void() 不能-> int*
说明函数的地址值并非不可能存储，只是存储的指针类型有所要求
那么对于函数f，需要一个void()类型的指针去接收其地址
*/
    void (*pf)(void) = f;
    void (*pf1)(int) = f1;
    //写法相对于 f的函数原型 来看，就是 f -> (*pf)，
    //其返回值类型和形参类型需完全相同，表示这是该种函数的指针,则该指针只能存该种函数的地址值
    printf("pf=%p\n",pf);//输出即f的地址
    printf("*pf=%p\n",*pf);//输出即f的地址
    //那么称为 pf 为一个函数指针 ,与指针相同, *pf = 地址值

    //通过函数指针调用函数
    pf();
    (*pf)();
    pf1(i);
    //等同于f();    
    //可以将 f() 和 (*pf)() 这样的形式理解为 地址+圆括号() 即 调用并执行 该地址中代码 

//函数指针的实际应用：
    //1.函数指针数组
    //可以运用到 当满足特定条件时调用对应函数 的情况
    void (*f_arr[])(int) = {f1,g1,h1};
    //理解：f_arr先和[]结合，说明它是个数组
    //将f_arr[]拿出，剩下的 void(*)(int) 就是该数组的类型，即函数指针类型的数组    
    int number = 0;
    //scanf("%d",&number);
    if(number>=0 && number<sizeof(f_arr)/sizeof(f_arr[0])){
        f_arr[number](0);
        //(*f_arr[number])(0);
    }
    /*
    可以代替以下代码:
    switch (number){
        case 0:f1(0);break;
        case 1:g1(0);break;
        case 2:h1(0);break;
    }
    
    相对于switch-case语句，函数指针数组更具有可读性，且改动时只需要改动数组值即可,核心判定代码不用改
    */

    //2.函数的形参含函数指针
    //如cal函数形参有函数指针，相当于可以接收一个函数（地址），并可以根据用户选择来选择调用的函数
    cal(plus,10,9);//n1+n2 = 10 + 9 = 19
    cal(minus,10,9);//n1-n2 = 10 -9 = 1


    //qsort
    int arr[] = {9,2,7,4,5,6,3,8,1,};

    qsort(arr , sizeof(arr)/sizeof(arr[0]) , sizeof(arr[0]) , cmp_int);
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);printf("%d ",arr[i++]));

    printf("\n\n");

    qsort(s, sizeof(s)/sizeof(s[0]), sizeof(s[0]), cmp_struct_age);
    for(int i=0;i<sizeof(s)/sizeof(s[0]);printf("%s.age=%d\n",s[i].name,s[i].age),i++);

    printf("\n");

    qsort(s, sizeof(s)/sizeof(s[0]), sizeof(s[0]), cmp_struct_name);
    for(int i=0;i<sizeof(s)/sizeof(s[0]);printf("%s.age=%d\n",s[i].name,s[i].age),i++);




}