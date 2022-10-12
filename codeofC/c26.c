#include <stdio.h>
#include <stdbool.h>
#pragma pack(16) //64λϵͳ�Ļ�������ϵ����Ĭ�϶���������8 ��32λϵͳĬ����4��

//#pragma pack(8) //�����ڸþ��ṹ�壬�Զ���Ĭ�϶�����
struct pointA{
    int m;
    int n;
};
//#pragma pack() //��Ĭ�϶�������ԭΪĬ��ֵ
struct pointA pa = {0,0};

void getStruct(struct pointA p){
    printf("p ����m n:");
    //scanf("%d %d",&p.m,&p.n);
    printf("m=%d n=%d\n",p.m,p.n);
}

void outputStruct(struct pointA p){
    printf("m=%d n=%d\n",p.m,p.n);
}


struct pointA getStruct_Ex(void){
    struct pointA t;
    printf("t ����m n:");
    //scanf("%d %d",&t.m,&t.n);
    return t;
}


struct pointA* getStruct_p(struct pointA *pm){
    printf("pm ����m n:");
    //scanf("%d %d",&pm->m,&pm->n);
    printf("m=%d n=%d\n",pm->m,pm->n);
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
    struct date today,tomorrow,today_t,mydate;
     
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

    //1.�������ýṹ������ֱ�Ӹ�ֵ���ú�������һ���޸ĺ�ṹ������ֵ��Ŀ��ṹ
    pa = getStruct_Ex();//�ı�pa
    outputStruct(pa);//�Ǹı���ֵ
    //2.������������ṹָ��
    struct date *ps = &mydate;
    //����Ч����ͬ�ĶԽṹָ���Ա�ĸ�ֵ
    (*ps).month = 12;
    ps -> month = 12;
    

    //�ṹ���͵����飨һ���������ж��ͬ���͵Ľṹ������
    struct date dateArr[3] = {{1,2,3},{4,5,6},{7,8,9}};
    //��dateArr[i]��������Ϊdate�Ľṹ����
    dateArr[1].day = 2;


    //һ���ṹ���п����нṹ���͵ĳ�Ա����
    struct line{
        struct point p1;
        struct point p2;
    }lineArr[2] = {
        {{1,2},{4,5}},
        {{2,3},{5,6}}
    };//����ṹ��ʱ����ֱ�ӳ�ʼ����һ���ṹ����
    struct line L1,*Lp;
    Lp = &L1;
    //���������Ч
    L1.p1.a = 1;
    Lp -> p1.a = 1; 

//���ڽṹ���ռ���ֽ���
    //�ڴ���� ��ظ��
    //1.��������ϵ����Ĭ�϶���������
        //Ĭ��������� ������ �� ����ϵͳ ������һ����˵ 32λϵͳ����ϵ�� Ϊ 4���ֽڣ���64λϵͳ����ϵ�� Ϊ 8���ֽڣ�
        //�Զ��������ͨ�� #pragma pack(n) ����
    //2.��������ֽ�����
        //���ݽṹ������ �������� ��Ա�У���ռ�ֽ��� ��� �ĳ�Ա���ֽڳ���
        //��������� �ṹ����A ��˵������������ֽ������� sizeof(int) �� 4
    //3.�ṹ�����ϵ����
        //�ṹ�屾����ֽڴ�С ������ �ṹ�����ϵ�� ��������
        //*�ṹ�����ϵ�� = MIN { ��������ϵ�� , ��������ֽ��� }
        //����� �ṹ����A , �ṹ��A �Ķ���ϵ��ΪMIN{8,sizeof(int)} = 4


    struct A{
        char c1;
        int i1;
        char c2;
    }A1;
//0-7 8 9-11 12-15 16
    struct B{
        //����Ա�����˳��һ���Ӱ�����սṹ����ֽ�����С
        //Ҫ���ڴ�����н�ʡ�ռ䣺 ��ռ�ÿռ�С�ĳ�Ա����������һ�𡣱������½�char��int������λ
        double d;
        char c;
        int i;
        /*
        ��˳��Ϊ:
        char c;
        double d;
        int i;
        ��ô�ֽ��� = 8(7) + 8 + 8(4) = 24 , �����˷�11���ֽ���
        */
    }B1;
    
    struct B_{
        //����Ա�����˳��һ���Ӱ�����սṹ����ֽ�����С
        //Ҫ���ڴ�����н�ʡ�ռ䣺 ��ռ�ÿռ�С�ĳ�Ա����������һ�𡣱������½�char��int������λ
        double d;
        char c;
        int i;
        int arr[10];//�൱��10��int���ͱ���
        // 8 + 8[1+4](3) + 8*5 = 56
    }B2;

    struct C{
        short int si;//�ֽ���Ϊ2
        struct B C_B;//sizeof(struct B) = 16,�Ҹó�Ա�е���������ֽ���Ϊsizeof(double)=8
        char c0;
        //�����ԱҲ��һ�����ݽṹ����ṹC�Ķ�����һ���Ǹó�Ա�С���������ֽ�������������
        //��ô����MIN{8,sizeof(short int),8(������ӽṹ������Ա�ֽ���)} = 2,��������ǰ�ᣬ������ֱ�Ӿ�Ϊ8 ��ȡ����sizeof(struct B)��
        //sizeof(struct C) = 8(6) + 16[8 + 8] + 8(7)= 32
    }C1;
//0-15 16-31 32    0-11 12-15 16-31 32
    struct C_{
        long double ld;//16  (32λ��ռ12���ֽ�,64λռ16��)
        struct B C_B;//sizeof(struct B) = 16,�Ҹó�Ա�е���������ֽ���Ϊsizeof(double)=8
        char c0;
        //��ô����MIN{8,16,8(������ӽṹ������Ա�ֽ���)} = 8
        //sizeof(struct C_) = 
    }C2;

    printf("sizeof(struct A)=%lu\n",sizeof(struct A));//12  =  4(3) + 4 + 4(3) //������Ϊ�˷ѵ����ֽ���,���˷���6���ֽ�
    printf("sizeof(struct B)=%lu\n",sizeof(struct B));//16  =  8 + 8[1+4](3)   //���˷�3���ֽ�
    printf("sizeof(struct B_)=%lu\n",sizeof(struct B_));//56 = 8 + 8[1+4](3) + 8[4+4] * 5
    printf("sizeof(struct C)=%lu\n",sizeof(struct C));//32  =  8(6) + 16[8 + 8] + 8(7) //���˷�13���ֽ�
    printf("sizeof(struct C_)=%lu\n",sizeof(struct C_));//48��������������������������������������������������������������������������������������
    //��Ӧ���� 32
    
    //printf("sizeof(long double)=%lu\n",sizeof());


/*
Ϊʲô�����ڴ����?
1. ƽ̨ԭ��(��ֲԭ��)���������е�Ӳ��ƽ̨���ܷ��������ַ�ϵ��������ݵģ�ĳЩӲ��ƽֻ̨����ĳЩ��ַ��ȡĳЩ�� �����͵����ݣ������׳�Ӳ���쳣��
2. ����ԭ�����ݽṹ(������ջ)Ӧ�þ����ܵ�����Ȼ�߽��϶��롣ԭ����Ϊ�˷���δ������ڴ棬��������Ҫ�������ڴ���ʣ���������ڴ���ʽ���Ҫһ�η��ʡ�

������˵�� �ṹ����ڴ�������ÿռ�����ȡʱ���������
*/












//=======================================================================================================================================================

    
//3.����
    //union ��ʽ��struct����,������Ĳ�ͬ�У�
    //�洢��
    // ���г�Ա����ͬһ���ڴ�ռ䣬�ռ��С ȡ���� ռ�ֽ����ĳ�Ա��ռ�ÿռ��С
    // ͬһʱ����ֻ��һ����Ա����Ч��
    //��ʼ����
    // �Ե�һ����Ա���г�ʼ��
    union AnElement{
        int i;
        char c[sizeof(int)];//LEN=4
    }e1,e2;
    //sizeof(AnElement) = sizeof(ռ�ÿռ����ĳ�Ա)��������ǵ���sizeof(int)
    e1.i = 1234;//תΪ16������0x04D2 ����Ӧ��� 00 00 04 D2
    e2.c[0] ='a';
    
    //x86�ṹ С�˴洢����ѭ����λ��ǰ���Ĵ�ŷ�ʽ���������λD2�������ڵ�һλ
    /*
    |c[0]|   |c[1]|   |c[2]|    |c[3]|
     D2        04       00        00
    |               i               |  
    */
    printf("e1[0]=%02hhX\n",e1.c[0]);//D2,��%02hhx�����d2(��Сд����)
    for(int i=0;i<sizeof(int);++i){
        printf("%02hhX",e1.c[i]);//D2040000
    }
    printf("\n");

    printf("e2.c[0]=%02hhX\n",e2.c[0]);//61, 'a'��Ӧ����97��ת��Ϊ16���Ƽ�61
    e2.i = 0xDEADBEEF;
    printf("e2.c[0]=%02hhX\n",e2.c[0]);//EF,˵��e2.c[]��e2.i����ͬһ���ڴ�ռ�


    //������;��
    //���ϳ�������Ҫȡһ�����ڲ����ֽڣ����һ�����Զ����Ƶ�д��һ���ļ�ʱ��һ������ʮ�����Ƶ���ʽ���ʱ����һ������ĳ������ʽ��ָ���ֽڽ����޸Ļ��ȡʱ������

    //��С�˸�������
    //1.С�ˣ��������·�ȴ����λ�ֽڣ�Ч�ʱȽϸߣ���Ϊ���㶼�Ǵӵ�λ��ʼ�ġ����ԣ���������ڲ�������С���ֽ���
    //2.��ˣ�����ϰ�߶�д����ֽ������ԣ����˼�������ڲ����������ĳ��ϼ������Ǵ���ֽ��򣬱������紫����ļ����档
    //java���� ��� ����ģʽ
//=======================================================================================================================================================

//���Ͷ��壺
    //�ؼ���typedef���÷� typedef + �Ѷ����������͵Ĺؼ��� + ���ⳤ�ȵ��Զ�������
    //��������һ���Ѷ�����������͵������֣������Ը����ִ���ԭ�ؼ��֣��磺
    typedef int length;
    length a=1,b=10;
    //length��Ϊint�ı��������������õ�Ч
    typedef struct Student{
        char *name[4];
        int age;
    }stu;
    typedef struct{
        char *name[4];
        int age;
    }stu_t;
    //ע�⣺�˴�stu�����ǽṹ������������struct Student��ȫ��Ч���¹ؼ���
    //stu��stu_t��Ч��ʵ������ʹ��typedefʱ��ԭ�ṹ������û�б�Ҫ���ж��壬��Student��ȫ����ʡȥ
    struct Student st1;
    stu st2;
    stu_t st3;
    //���������Ч

    //���������¶��� �������� ���������͵Ĺؼ���
    typedef char* Strings[10];
    Strings StrArr;
    StrArr[9]="102031";






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
//scanf("%i %i %i",&today_.day,&today_.month,&today_.year);

if(today_.day != numberofdays(today_))
    tomorrow_=(struct DATE){++today_.day,today_.month,today_.year};
else if(today_.month == 12)
    tomorrow_=(struct DATE){1,1,++today_.year};
else
    tomorrow_=(struct DATE){1,++today_.month,today_.year};

printf("tomorrow is %i-%i-%i.\n",tomorrow_.year,tomorrow_.month,tomorrow_.day);

















}