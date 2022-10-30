#include <stdio.h>
struct U0{
    unsigned int leading : 3;//冒号加数字n 指分配n个bit位给该变量
    unsigned int FLAG1 : 1;
    unsigned int FLAG2 : 1;
    int tail : 27; 
    //这里加起来正好为32，所以可以认为是4个字节的int
}uu;
//sizeof(uu)=4
//若tail大于27，则sizeof(uu)=8或甚至更大
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
    printf("%d的二进制表示为:",temp);
    printBIN(temp);
}