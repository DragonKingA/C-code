#include <stdio.h>

#define pi 3.14159
const double PI = 3.14159;
//���߿��Ե�Ч
//�궨�岻ͬ�������ȫ�ֱ��������Ǹ�Ϊ����� �ļ��ϵ�ֱ���滻
//�� ������̣�.c -> .i -> .s -> .o -> .exe����pi���ᱻ���� ���� �� ������ ���������Ǵ�.c��.i�Ĺ�����Դ�����pi�ᱻֱ���滻��3.14159
//�ʳ�����.i�ļ���Դ������main�����ǣ�
/*
void main(){
    printf("%f\n",3.14159);//��������ֵ��ȡ���̣�ֻ�ǵ������滻
    printf("%f\n",PI);//PI�Ǳ��������ᱻֱ���滻,����������ʱ�Ըñ���ָ����ڴ�ռ��е�ֵ���ж�ȡ
    ������������
}
*/

#define sum1 1+2
#define sum2 (1+2)
//����ֵ��һ�����壬���Ҫ����Բ�����ٽ����滻




#define PRT printf("sum1=%d\n",sum1); \
            printf("sum2=%d\n",sum2)

#define PRT_ printf("sum1=%d\n",sum1); \
             printf("sum2=%d\n",sum2);
//�궨���е�ֵ������ *�κζ���* , �����궨������зֺš�;���� �ո� �� Ҳ�ᱻԭ�ⲻ�����滻��ȥ������ע�ͷ��ż�ע�Ͳ��ᱻ�滻������ϰ���� �� ����ӷֺ�
//���궨����ֵ����䳬��һ�У�Ҫ�ں���� ��\��
//��ֵ���Ժ��Ѷ���ĺ�


#define _DEBUG
//�궨�������ֵ
//������ֵ������ �������� ������ʹ�� #ifndef �� Ԥ����� ����� ��ֵ�� �Ƿ��Ѿ��������
//�������Կ��� ֻ����ĳЩ����Ĵ��룬������Ϊ�趨��������Լ�����ﵽ��ͬ�� ����Ч��


#define cube(x) ((x)*(x)*(x))
//�궨����Խ��ղ������� ���κ�
//�����ں�����ȷʵ��ȫ���Ǻ�����������Ϊ�ǽ� ĳ������ʽ �滻��ĳ������ ��ĳ��ֵ����Ľ�� ����





void main(){

    printf("%f\n",pi);
    printf("%f\n",PI);

    PRT;
    PRT_
    printf("sum1*2 = %d\n",sum1*2);//5  1+2*2
    printf("sum1*2 = %d\n",sum2*2);//6  (1+2)*2


    printf("cube(3)=%d\n",cube(3));




}