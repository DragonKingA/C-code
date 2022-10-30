#include <stdio.h>
struct U0{
    unsigned int leading : 3;//ð�ż�����n ָ����n��bitλ���ñ���
    unsigned int FLAG1 : 1;
    unsigned int FLAG2 : 1;
    int tail : 27; 
    //�������������Ϊ32�����Կ�����Ϊ��4���ֽڵ�int
}uu;
//sizeof(uu)=4
//��tail����27����sizeof(uu)=8����������
void printBIN(unsigned int num){
    unsigned int mask = 1 << 31;
    for(;mask;mask >>= 1){
        printf("%d",num & mask ? 1:0);
    }
    printf("\n");
}

void main(){
    unsigned int temp=0;
    uu.leading = 2;// 010
    uu.FLAG1 = 0;
    uu.FLAG2 = 1;
    uu.tail = 0;
    // 0000 .... 0001 0010  2+16=18
    printf("sizeof(uu)=%lu\n",sizeof(uu));//4
    temp = *(int *)(&uu);
    printf("uu=%d\n",temp);//18
    printf("%d�Ķ����Ʊ�ʾΪ:",temp);
    printBIN(temp);
}