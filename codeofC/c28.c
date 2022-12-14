#include <stdio.h>

#define pi 3.14159
const double PI = 3.14159;
//两者可以等效
//宏定义不同于下面的全局变量，它是更为纯粹的 文件上的直接替换
//即 编译过程（.c -> .i -> .s -> .o -> .exe）中pi不会被当作 变量 或 常变量 来看，而是从.c到.i的过程中源代码的pi会被直接替换成3.14159
//故呈现在.i文件中源代码中main函数是：
/*
void main(){
    printf("%f\n",3.14159);//并不存在值读取过程，只是单纯的替换
    printf("%f\n",PI);//PI是变量名不会被直接替换,而是在运行时对该变量指向的内存空间中的值进行读取
    ······
}
*/

#define sum1 1+2
#define sum2 (1+2)
//若宏值是一个整体，务必要加上圆括号再进行替换



#define PRTmsg(msg) printf(msg)

#define PRT printf("sum1=%d\n",sum1); \
            printf("sum2=%d\n",sum2)

#define PRT_ printf("sum1=%d\n",sum1); \
             printf("sum2=%d\n",sum2);
//宏定义中的值可以是 *任何东西* , 甚至宏定义后若有分号‘;’或 空格 等 也会被原封不动地替换过去（除了注释符号及注释不会被替换），故习惯上 宏 不会加分号
//若宏定义中值或语句超过一行，要在后面加 ‘\’
//宏值可以含已定义的宏，即宏里嵌套宏


#define _DEBUG
//宏定义可以无值
//这类无值宏用于 条件编译 ，可以使用 #ifndef 等 预定义宏 来检查 无值宏 是否已经被定义过
//这样可以控制 只编译某些区域的代码，并受人为设定的条件所约束，达到不同的 编译效果


#define cube(x) ((x)*(x)*(x))
#define max(a,b) ((a)>(b) ? (a) : (b))
//宏定义可以接收一个或多个参数，即 带参宏
//类似于函数但确实完全不是函数，可以认为是将 某个表达式 替换到某处，并 以某个值算出的结果 存在
//注意：宏定义里一切参数与值都有括号，整个宏值以及每个参数都有括号


#define prtADD(a,b) printf(#a " + " #b " = %d\n" , ((a) + (b)))
#define NAME_Xn(n) x ## n
#define PRT_Xn(n) printf("x"#n " = %d\n",NAME_Xn(n))
//当 # 运算符存在于宏值中，其意义就是把记号转换成字符串，这个过程叫做 字符串化
// ## 运算符，可以把两个记号组合成一个记号














//总结：
//宏有两种运算符：# 和 ##
//宏没有类型检查，或是缺点，或是优点
//部分带参宏可以被inline函数(含类型检查)所替代


void main(){

    printf("%f\n",pi);
    printf("%f\n",PI);

    PRT;
    PRT_
    printf("sum1*2 = %d\n",sum1*2);//5  1+2*2
    printf("sum1*2 = %d\n",sum2*2);//6  (1+2)*2
    printf("max{sum2*2,sum1*2} = %d\n",max(sum2*2,sum1*2));//6
    PRTmsg("PRTmsg打印\n");
    printf("cube(3)=%d\n",cube(3));//27
    


    prtADD(5,10);

    int NAME_Xn(1) = 14;//即int x1 = 14;
    int x2 = 20;
    PRT_Xn(1);//即printf("x1 = %d\n",x1);
    PRT_Xn(2);//即printf("x2 = %d\n",x2);


}