#include <stdio.h>
#include <stdbool.h>

struct pointA{
    int m;
    int n;
};

struct pointA pa = {0,0};

void getStruct(struct pointA p){
    printf("p ����m n:");
    scanf("%d %d",&p.m,&p.n);
    printf("m=%d n=%d\n",p.m,p.n);
}

void outputStruct(struct pointA p){
    printf("m=%d n=%d\n",p.m,p.n);
}


struct pointA getStruct_Ex(void){
    struct pointA t;
    printf("t ����m n:");
    scanf("%d %d",&t.m,&t.n);
    return t;
}


void main(){
    //�Ĵ�����������ͣ��������ַ��ͣ������ͣ�ö���ͣ��ֱ��� �����ַ�����٣���ĳЩ����ı�ʶ���ı�ʾ��

    //1.ö�٣�enum (ȫ��enumeration)
    //����������enum ö����������{����0,����1,����,����n};
    //ͨ�� ö���������� ����������ʹ�ã��������ô������ڵ�����
    //����0~n�ǳ������ţ�����Ϊint,ֵΪ����0~n��
    //��ö�ٵ�ʵ���Ƕ�int���ݵ����⻯���������ڷ��� �ű�ʽ��const int�������
    enum colors {red,yellow,green,NumOfColors};//�����ͷ���ش���������red=0,yellow=1,green=2
    //ö�ٵ�������Ǹ���Щ����ֵ0~n���Զ���һЩ���֣��������
    //�� �������ö�ٳ��� ������һ���������ڼ�����������NumOfColors=3,����˵��������3����ɫ����
    enum colors c = red;
    printf("red=%d\n",c);//0
    printf("NumOfColors=%d\n",NumOfColors);//3

    enum colors_ {blue=1,purple=5,NumOfColors_};//��ʱ0,2,3,4û�б��������֣����ᱻ����
    printf("NumOfColors_=%d\n",NumOfColors_);//6


//=======================================================================================================================================================


    //2.�ṹ
    //1-�����ṹ��Ȼ��Ŷ���ṹ����
    struct date{
        //�ṹ��Ա��Ҳ����˵������
        int day;
        int month;
        int year;
    };//����ֺ�����©��
    struct date today,tomorrow,today_t;
     
    //2-�����������ṹ���߶���ṹ����
    struct{
        int x;
        int y;
    }m1,m2;

    //3-�������ṹ���߶���ṹ����
    struct point{
        int a;
        int b;
    }p1,p2;

    //�ṹ�����ĸ�ֵ
    //1-��ÿ�����Զ�����ֵ
    today.year = 2022;
    today.month = 10;
    today.day = 5;

    //2-����ʽ��ֵ��ֻ�����ڽṹ������ʼ��ʱ ���� ǿ������ת����
    //today_t = {5,31,2014};����д����
    struct date today_t0 = {5,31};
    struct date today_t1 = {5,31,2014};
    //���߶�ĳЩ���Ծ������,����˳��
    struct date today_t2 = {.month = 5, .day = 1};
    //��������ͬ����δ��ĳ���Ը�ֵ�������д�ӡ���ḳ����Ĭ��ֵ������.year = 0;

    p1 = (struct point){10,100};

    //3-�ṹ������ֱ�Ӹ�ֵ��ֻ��ֵ�������ݵ�ַ����ֵ��ı���һ����Ӱ������һ����
    tomorrow = today;//ͬ���ͣ�����date���ͣ��Ľṹ������໥��ֵ��ȫ�����Զ��ᴫ�ݣ�
    //�ṹ��û�е�ַ���壬��Ҫȡ�ṹ������ַ����Ҫ&ȡ��ַ
    printf("today=%p\n",&today);//000000baa07ffae0
    printf("tomorrow=%p\n",&tomorrow);//000000baa07ffad4


    tomorrow.day += 1;
    printf("today is %d-%d-%d\n",today.year,today.month,today.day);//2022-10-5
    printf("tomorrow is %d-%d-%d\n",tomorrow.year,tomorrow.month,tomorrow.day);//2022-10-6


    //�ṹ���ں�����ֻ����д�ֵ������ı䴫��ṹ��Ľṹ����ֵ
    getStruct(pa);//�������޸ĺ����4 4�������ı�pa��������ָ�����죩
    outputStruct(pa);//���ǳ�ʼ�� 0 0
    
    //�������ýṹ������ֱ�Ӹ�ֵ���ú�������һ���޸ĺ�ṹ������ֵ��Ŀ��ṹ
    pa = getStruct_Ex();//�ı�pa
    outputStruct(pa);//�Ǹı���ֵ


//exersize����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������
//�ýṹ���bool��������������ڣ���֪ĳ�����ڣ�
struct DATE{
    int day;
    int month;
    int year;
};

struct DATE today_,tomorrow_;

bool isLeap(struct DATE d){//�Ƿ�Ϊ����, ����2��Ϊ29��
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

printf("�������������(dd mm yyyy)��");
scanf("%i %i %i",&today_.day,&today_.month,&today_.year);

if(today_.day != numberofdays(today_))
    tomorrow_=(struct DATE){++today_.day,today_.month,today_.year};
else if(today_.month == 12)
    tomorrow_=(struct DATE){1,1,++today_.year};
else
    tomorrow_=(struct DATE){1,++today_.month,today_.year};

printf("tomorrow is %i-%i-%i.\n",tomorrow_.year,tomorrow_.month,tomorrow_.day);




















}