#include <stdio.h>
#include <stdbool.h>

struct pointA{
    int m;
    int n;
};

struct pointA pa = {0,0};

void getStruct(struct pointA p){
    printf("p 输入m n:");
    scanf("%d %d",&p.m,&p.n);
    printf("m=%d n=%d\n",p.m,p.n);
}

void outputStruct(struct pointA p){
    printf("m=%d n=%d\n",p.m,p.n);
}


struct pointA getStruct_Ex(void){
    struct pointA t;
    printf("t 输入m n:");
    scanf("%d %d",&t.m,&t.n);
    return t;
}


struct pointA* getStruct_p(struct pointA *pm){
    printf("pm 输入m n:");
    scanf("%d %d",&pm->m,&pm->n);
    printf("m=%d n=%d\n",pm->m,pm->n);
}






void main(){
    //四大基本数据类型：常量，字符型，布尔型，枚举型（分别表达 数，字符，真假，含某些意义的标识符的表示）

//1.枚举，enum (全称enumeration)
    //声明方法：enum 枚举类型名字{名字0,名字1,……,名字n};
    //通常 枚举类型名字 并不会有所使用，都是在用大括号内的名字
    //名字0~n是常量符号，类型为int,值为常量0~n。
    //故枚举的实质是对int数据的特殊化处理，常用于方便 排比式地const int定义变量
    enum colors {red,yellow,green,NumOfColors};//这样就方便地创建出常量red=0,yellow=1,green=2
    //枚举的意义就是给这些常量值0~n，自定义一些名字，方便调用
    //在 有意义的枚举常量 最后加入一个常量用于计数，如这里NumOfColors=3,可以说明这里有3个颜色常量
    enum colors c = red;
    printf("red=%d\n",c);//0
    printf("NumOfColors=%d\n",NumOfColors);//3

    enum colors_ {blue=1,purple=5,NumOfColors_};//此时0,2,3,4没有被定义名字，但会被计数
    printf("NumOfColors_=%d\n",NumOfColors_);//6


//=======================================================================================================================================================


//2.结构
    //1-声明结构，然后才定义结构变量
    struct date{
        //结构成员，也可以说是属性
        int day;
        int month;
        int year;
    };//这个分号容易漏掉
    struct date today,tomorrow,today_t,mydate;
     
    //2-边声明无名结构，边定义结构变量
    struct{
        int x;
        int y;
    }m1,m2;

    //3-边声明结构，边定义结构变量
    struct point{
        int a;
        int b;
    }p1,p2;

    //结构变量的赋值
    //1-对每个属性独立赋值
    today.year = 2022;
    today.month = 10;
    today.day = 5;

    //2-数组式赋值（只能用在结构变量初始化时 或者 强制类型转换）
    //today_t = {5,31,2014};这样写报错
    struct date today_t0 = {5,31};
    struct date today_t1 = {5,31,2014};
    //或者对某些属性具体操作,无视顺序
    struct date today_t2 = {.month = 5, .day = 1};
    //与数组相同，若未给某属性赋值，但进行打印，会赋予其默认值，这里.year = 0;

    p1 = (struct point){10,100};

    //3-结构变量间直接赋值（只传值，不传递地址，赋值后改变其一不会影响另外一个）
    tomorrow = today;//同类型（都是date类型）的结构体可以相互赋值（全部属性都会传递）
    //结构名没有地址含义，若要取结构变量地址，需要&取地址
    printf("today=%p\n",&today);//000000baa07ffae0
    printf("tomorrow=%p\n",&tomorrow);//000000baa07ffad4


    tomorrow.day += 1;
    printf("today is %d-%d-%d\n",today.year,today.month,today.day);//2022-10-5
    printf("tomorrow is %d-%d-%d\n",tomorrow.year,tomorrow.month,tomorrow.day);//2022-10-6


    //结构体在函数中只会进行传值，不会改变传入结构体的结构变量值
    getStruct(pa);//函数内修改后输出4 4，但不改变pa本身（这点跟指针相异）
    outputStruct(pa);//仍是初始的 0 0

    //1.可以利用结构体间可以直接赋值，用函数返回一个修改后结构，并赋值给目标结构
    pa = getStruct_Ex();//改变pa
    outputStruct(pa);//是改变后的值
    //2.可以向函数传入结构指针
    struct date *ps = &mydate;
    //两种效果相同的对结构指针成员的赋值
    (*ps).month = 12;
    ps -> month = 12;
    

    //结构类型的数组（一个数组里有多个同类型的结构变量）
    struct date dateArr[3] = {{1,2,3},{4,5,6},{7,8,9}};
    //则dateArr[i]都是类型为date的结构变量
    dateArr[1].day = 2;


    //一个结构体中可以有结构类型的成员变量
    struct line{
        struct point p1;
        struct point p2;
    }lineArr[2] = {
        {{1,2},{4,5}},
        {{2,3},{5,6}}
    };//定义结构体时可以直接初始定义一个结构数组
    struct line L1,*Lp;
    Lp = &L1;
    //以下两句等效
    L1.p1.a = 1;
    Lp -> p1.a = 1; 


//=======================================================================================================================================================

    
//3.联合
    //union 形式与struct类似,但极大的不同有：
    //存储：
    // 所有成员共享同一个内存空间，空间大小 取决于 占字节最大的成员的占用空间大小
    // 同一时间里只有一个成员是有效的
    //初始化：
    // 对第一个成员进行初始化
    union AnElement{
        int i;
        char c;
    }e1,e2;
    //sizeof(AnElement) = sizeof(占用空间最大的成员)，这里就是等于sizeof(int)
    e1.i = 4;
    e2.c ='a';
    e2.i = 0xDEADBEEF;
    /*
    c
    EF BE AD DE

    */





//=======================================================================================================================================================

//类型定义：
    //关键字typedef，用法 typedef + 已定义数据类型的关键字 + 任意长度的自定义名字
    //用于声明一个已定义的数据类型的新名字，并可以该名字代替原关键字，如：
    typedef int length;
    length a=1,b=10;
    //length成为int的别名，并与其作用等效
    typedef struct Student{
        char *name[4];
        int age;
    }stu;
    typedef struct{
        char *name[4];
        int age;
    }stu_t;
    //注意：此处stu并不是结构变量，而是与struct Student完全等效的新关键字
    //stu与stu_t等效，实际上在使用typedef时，原结构体名称没有必要进行定义，即Student完全可以省去
    struct Student st1;
    stu st2;
    stu_t st3;
    //以上三句等效

    //可以用于新定义 定长数组 的数据类型的关键字
    typedef char* Strings[10];
    Strings StrArr;
    StrArr[9]="102031";






//exersize————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//用结构体和bool函数输出次日日期（已知某天日期）
struct DATE{
    int day;
    int month;
    int year;
};

struct DATE today_,tomorrow_;

bool isLeap(struct DATE d){//是否为闰年, 是则2月为29天
    bool leap = false;
    if((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
        leap = true;
    
    return leap;
}

int numberofdays(struct DATE d){
    int days;
    const int daysPerMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if(d.month == 2 && isLeap(d))
        days = 29;
    else
        days = daysPerMonth[d.month - 1];

    return days;
}

printf("请输入今天日期(dd mm yyyy)：");
scanf("%i %i %i",&today_.day,&today_.month,&today_.year);

if(today_.day != numberofdays(today_))
    tomorrow_=(struct DATE){++today_.day,today_.month,today_.year};
else if(today_.month == 12)
    tomorrow_=(struct DATE){1,1,++today_.year};
else
    tomorrow_=(struct DATE){1,++today_.month,today_.year};

printf("tomorrow is %i-%i-%i.\n",tomorrow_.year,tomorrow_.month,tomorrow_.day);




















}