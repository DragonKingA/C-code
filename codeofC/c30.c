#include <stdio.h>
void main() {
    //格式化的输入输出
    //一.printf
    //  %[flags][width][.prec][hlL]type
    //  %[格式][最小输出宽度][.精度][长度][格式字符]
    //      flags:
    //          1. - ，左对齐
    //          2. + ，显示数的正负号（正数也要输出+号）
    //          3.(space)空格 ，整数留空
    //          4. 0 ，0填充字符空位
    //      width/.prec:
    //          1. number 即直接填整数，表示字符宽度
    //          2. .number ，小数点后位数
    //          3. * ，接收参数来限制字符宽度
    //          4. .* ，接收参数来限制小数点后的位数
    //      hlL:
    //          1. hh ，输出单个字节即char
    //          2. h ，输出short类
    //          3. l ，输出long类
    //          4. ll ，输出long long类
    //          5. L ，输出long double类
    //      type:
    //          1. d或i ， int
    //          2. u ，unsigned int
    //          3. c ，char
    //          4. s ，字符串
    //          5. p ，指针
    //          6. o ，八进制
    //          7. x或X ，字母小写或大写的十六进制
    //          8. a或A ，字母小写或大写的十六进制浮点
    //          9. f或F ，float型六位小数
    //          10. e或E ，指数(输出的e为小写e或大写E),且只接收小数
    //          11. g或G ，若大于1，输出6位有效数字;若为1，则输出1；若小于1，则输出6位有效数字的指数形式       
    //          12. n ，读入/写出的个数

    int n = 123;
    double nd = 123.456;

    printf("flags:\n");
    printf("% d\n",n);//无论给多少个空格，都只会给整数前空一格，且与flags其他符号均冲突
    printf("%09d\n",n);//在给定字符宽度中在空位补0
    printf("%+9d\n",n);//显示正负号且右对齐
    printf("%+-9d\n",n);//显示正负号且左对齐
    //printf("%-+9d\n",n);与上句等同

    printf("\n");
    
    printf("width/.prec:\n");
    printf("%9d\n",n);//共9个字符宽度，默认右对齐，左边有6个空位，右边123共占3个字符宽度
    printf("%-9d\n",n);//左对齐，其余同上
    printf("%9.2f\n",nd);//输出2位小数
    printf("%*d\n",9,n);//共9个字符宽度
    printf("%*.*f\n",9,3,nd);//输出占9个字符宽度的3位小数

    printf("\n");

    printf("hlL:\n");
    printf("%hhd\n",12345);//输出57
    //因为int型的12345的十六进制为0x3039(四个bit位),由于hh只取一个字节即两个bit，就是十六进制的39，再转化为十进制输出为57
    //这里就相当于输出 char(12345)

    printf("\n");

    printf("type:\n");
    printf("%f\n",123.12345678);//只输出6位小数
    printf("%E\n",12345.0);//1.234500E+04 相当于科学计数法
    printf("%g\n",1.0000123456789);
    printf("%G\n",0.0000123456789);
    printf("%a\n",0.0000123456789);
    int num1,num2;
    printf("%d%n\n",12345,&num1);
    printf("num1=%d\n",num1);//5,说明%n之前有5个字符(12345)
    printf("%dabc%n\n",12345,&num2);
    printf("num1=%d\n",num2);//8,说明%n之前有8个字符(12345abc)



    //二.scanf
    //  %[flags]type
    //      flags:
    //          1. l ，long或double
    //          2. ll ，long long
    //          3. L ，long double
    //          4. hh ，char
    //          5. h ，short
    //          6. 数字 ，最大字符数
    //          7. * ，跳过第一个接收的参数
    //      type:
    //          1. d ，int
    //          2. i ，整数或十六进制或八进制(据输入的东西选择)
    //          3. u ，unsigned int
    //          4. o ，八进制
    //          5. x ，十六进制
    //          6. a或e或f或g ，float
    //          7. c ，char
    //          8. s ，字符串
    //          9. p ，指针
    //          *10. [...] ，所允许的字符
    //          第10个包含知识比较复杂***************************************
    //
    int skip;
    scanf("%*d%d",&skip);//第一次输入的数被丢弃，接收第二次输入的数并存入skip中
    printf("%d\n",skip);//输出第二次输入的数


}