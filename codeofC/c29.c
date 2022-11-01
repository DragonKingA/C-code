#include <stdio.h>
#include <string.h>

struct stu{
    char name[20];
    int age;
};
struct stu s[3] = {{"zhangsan", 30}, {"lisi", 34}, {"wangwu", 20}};



//����ָ�룺
typedef void(* fun_vi)(int);
 //��void(*)(int) ����ָ������������Ϊ fun_vi   ע��д��
 //��������� typedef void(*)(int) fun_vi ��д�� ���� ��д��

void (* signal(int , void(*)(int)) ) (int);
//����һ��signal�����������Ϊint��void(*)(int)���䷵��ֵΪvoid(*)(int)
//������һ������������ָ�������ҷ���ֵΪ����ָ�����͵ĺ���
//���������void(*)(int) signal(int , void(*)(int)); �� ���� ��д��
//���typedef���Ը�ֱ�ۣ�
fun_vi signal_simplified(int , fun_vi);

void f(void){
    printf("����f������\n");
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

//�ص�����������ƾ��Ǻ����Ĳ���������ָ�룬��������ѡ����õ��ⲿ����
//qsort\sort�е�cmp�����������ǻص�����
void cal(int (*pf)(int , int ) ,int n1,int n2){
    printf("cal(n1,n2): %d\n",pf(n1,n2));
}



//qsort����  (quick sort)��������  ���Զ��ַ��������飬�ṹ�������
void qsort( void *base, //void*���Դ����κ��������ݣ������������������е�һ��Ԫ�صĵ�ַ
            size_t num, //��������Ԫ�صĸ���
            size_t width, //����������һ��Ԫ�ص��ֽ�����С(������ʹ��֪���������ݵ�����Ҳ�ܶ�ÿ��Ԫ�ض�λ)
            int (__cdecl *compare )(const void *elem1, const void *elem2 ) 
            //compare�����������Ƚϴ���������������Ԫ�صĺ������ұ�������������͵Ĵ��Ƚϵ�����Ԫ��
            );
int cmp_int(const void *e1 , const void *e2){//��Ϊe1,e2��������ָ�룬ϵͳ��֪����ָ��ռ�����ֽڣ���Ҫ�Ƚ���ǿ������ת������ʹ��
    return *(int *)e1 > *(int *)e2 ;//�������У���e1����e2 , ��return 1 , ��e1��e2�ͽ���
    //��return *(int *)e1 - *(int *)e2 ;
}
int cmp_struct_age(const void* e1, const void* e2){
    return ((struct stu *)e1)->age > ((struct stu *)e2)->age ;
}
int cmp_struct_name(const void* e1, const void* e2){
    return strcmp(((struct stu *)e1)->name , ((struct stu *)e2)->name) ;//����
}
/*
cmp����ֵ�����
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
��a,f,main��Щ���ֶ������Ÿ���ָ��ĵ�ַ
�����ں���f��main�����ǵĵ�ַ�����
�����ǳ��� p = f����fָ��ĵ�ֵַ����һ��ָ�룬�ᱨ��void() ����-> int*
˵�������ĵ�ֵַ���ǲ����ܴ洢��ֻ�Ǵ洢��ָ����������Ҫ��
��ô���ں���f����Ҫһ��void()���͵�ָ��ȥ�������ַ
*/
    void (*pf)(void) = f;
    void (*pf1)(int) = f1;
    //д������� f�ĺ���ԭ�� ���������� f -> (*pf)��
    //�䷵��ֵ���ͺ��β���������ȫ��ͬ����ʾ���Ǹ��ֺ�����ָ��,���ָ��ֻ�ܴ���ֺ����ĵ�ֵַ
    printf("pf=%p\n",pf);//�����f�ĵ�ַ
    printf("*pf=%p\n",*pf);//�����f�ĵ�ַ
    //��ô��Ϊ pf Ϊһ������ָ�� ,��ָ����ͬ, *pf = ��ֵַ

    //ͨ������ָ����ú���
    pf();
    (*pf)();
    pf1(i);
    //��ͬ��f();    
    //���Խ� f() �� (*pf)() ��������ʽ���Ϊ ��ַ+Բ����() �� ���ò�ִ�� �õ�ַ�д��� 

//����ָ���ʵ��Ӧ�ã�
    //1.����ָ������
    //�������õ� �������ض�����ʱ���ö�Ӧ���� �����
    void (*f_arr[])(int) = {f1,g1,h1};
    //��⣺f_arr�Ⱥ�[]��ϣ�˵�����Ǹ�����
    //��f_arr[]�ó���ʣ�µ� void(*)(int) ���Ǹ���������ͣ�������ָ�����͵�����    
    int number = 0;
    //scanf("%d",&number);
    if(number>=0 && number<sizeof(f_arr)/sizeof(f_arr[0])){
        f_arr[number](0);
        //(*f_arr[number])(0);
    }
    /*
    ���Դ������´���:
    switch (number){
        case 0:f1(0);break;
        case 1:g1(0);break;
        case 2:h1(0);break;
    }
    
    �����switch-case��䣬����ָ����������пɶ��ԣ��ҸĶ�ʱֻ��Ҫ�Ķ�����ֵ����,�����ж����벻�ø�
    */

    //2.�������βκ�����ָ��
    //��cal�����β��к���ָ�룬�൱�ڿ��Խ���һ����������ַ���������Ը����û�ѡ����ѡ����õĺ���
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