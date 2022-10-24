#include <stdio.h>

//函数指针：

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
void cal(int (*pf)(int , int ) ,int n1,int n2){
    printf("cal(n1,n2): %d\n",pf(n1,n2));
}

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


}