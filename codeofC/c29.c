#include <stdio.h>

//����ָ�룺

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


}