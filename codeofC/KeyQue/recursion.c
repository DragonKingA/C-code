//母牛的故事

/*
有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。请编程实现在第n年的时候，共有多少头母牛？

Input
输入数据由多个测试实例组成，每个测试实例占一行，包括一个整数n(0<n<55)，n的含义如题目中描述。
n=0表示输入数据的结束，不做处理。

Output
对于每个测试实例，输出在第n年的时候母牛的数量。每个输出占一行。
*/

/*
下标 0 1 2 3 4 5 6 7 8 9 ···
牛否 1 1 0 0 0 0 0 0 0 0
年龄 4 1 0 0 0 0 0 0 0 0

总牛数可以用 年龄叠加 推出
第一只牛的年龄需要减去？

直接用年龄数组？
下标 0 1 2 3 4 5 6 7 8 9 ···
年龄 4 1 0 0 0 0 0 0 0 0 ···

年龄为0就是没牛，大于0就是有牛，对于 非0元素 - 4 即该牛总共生产牛数
年龄超过4后，每加1就某个下标的年龄从0变成1
第一头牛产牛数特别计算即可，从第二头牛年龄算起
//生下来，3年后，第4年就生另一头
第一年 1 牛  3-3 + 1 = 1
下标 0 1 2 3 4 5 6 7 8 9 ···
年龄 3 0 0 0 0 0 0 0 0 0 ···

第二年 2 牛  4-3 + 1 = 2
下标 0 1 2 3 4 5 6 7 8 9 ···
年龄 4 1 0 0 0 0 0 0 0 0 ···

第三年 3 牛  5-3 + 1 = 3
下标 0 1 2 3 4 5 6 7 8 9 ···
年龄 5 2 1 0 0 0 0 0 0 0 ···

第四年 4 牛  6-3 + 1 = 4
下标 0 1 2 3 4 5 6 7 8 9 ···
年龄 6 3 2 1 0 0 0 0 0 0 ···

第五年 6 牛  7-3 + 4-3 + 1 = 6
下标 0 1 2 3 4 5 6 7 8 9 ···
年龄 7 4 3 2 1 1 0 0 0 0 ···

第六年 9 牛  8-3 + 5-3 + 4-3 + 1 = 9
下标 0 1 2 3 4 5 6 7 8 9 ···
年龄 8 5 4 3 2 2 1 1 1 0 ···

第七年 13 牛  
下标 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18···
年龄 9 6 5 4 3 3 2 2 2 1  1  1  1

第八年 19 牛  
下标 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18···
年龄10 7 6 5 4 4 3 3 3 2  2  2  2  1  1  1  1  1  1

第九年 28 牛  
下标 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18···
年龄11 8 7 6 5 5 4 4 4 3  3  3  3  2  2  2  2  2  2···
*/
// #include <stdio.h>
// int main(){
//     int year;
//     long long int m;
//     long long int temp;
//     long long int AgeOfCow[10000];
//     //cowIndex用于记录下次产的牛于数组的索引
//     while(scanf("%d",&year) != EOF,year){   
        
//         m=1;
//         temp=m=1;
//         AgeOfCow[0]= 3;
//         for(long long int i=1;i<10000;i++){
//             AgeOfCow[i]=0;
//         }

//         for(long long int i=1;i<year;i++){//除去第一年
// //year = 2 -- >m=2 
// //year = 3 -- >m=3
// //year = 4 -- >m=4
// //year = 5 -- >m=
// //···
//             for(long long int j=0;j<m;j++){
//                 AgeOfCow[j]++;
//                 if(AgeOfCow[j] > 3){
//                     AgeOfCow[temp]++;
//                     temp++;
//                 }
//             }
//             m = temp;
//         }
        
//         //计算到第year年总牛数m
//         // for(int i=0;i<cowIndex;i++){
//         //     if(AgeOfCow[i]>3){
//         //         m += AgeOfCow[i] - 3;
//         //     }
//         // }
//         printf("%lld\n",m);

//     }
//     return 0;
// }
//为什么输出溢出（0<year<55）不能覆盖全部year
//使用递归····


#include<stdio.h>
int year,year_temp;
int GetCows(int y){




    if(y > 0)GetCows(y-1)   ;
}

int main(){
    
    while(scanf("%d",&year) != EOF){
        year_temp = year;
        GetCows(year_temp);
    }

    return 0;
}






//求斐波那契数列的第num项
#include <stdio.h>
int GetFib(int n){
    if(n <= 2){
        return 1;
    }else{
        return GetFib(n-1) + GetFib(n-2);
    }
}
int main(){
    int num;
    scanf("%d",&num);
    printf("result=%d",GetFib(num));
    return 0;
}






















