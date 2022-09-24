#include <stdio.h>

void main(){
    //一维数组
    int b[4]={1,2,3,4,};//1，2，3，4，0
    //数组内最后一个逗号若不跟数字，会自动补零（老传统）
    //二维数组
    int a[][4] ={{1,2,3,4},{1,2,3},};//1，2，3，4，1，2，3，0
    int c[][4] ={1,2,3,4,1,2,3};//也是1，2，3，4，1，2，3，0
    //列数必须赋予，而行数可以空着让编译器自动给出相应空间
    //大括号内的大括号可以省略，编译器自动分别排序
    //用矩阵排列来理解，每行有4个空间，放满4个空间就会去放下一行的空间
    
    //二维数组的遍历
    for(int i = 0;i<2;i++){
        for(int j = 0;j<4;j++){
            printf("%d ",a[i][j]);
        }
    }
    printf("\n");
    for(int i = 0;i<2;i++){
        for(int j = 0;j<4;j++){
            printf("%d ",c[i][j]);
        }
    }

    
}