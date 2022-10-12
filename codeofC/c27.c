#include <stdio.h>
#include <stdlib.h>
#include "c27ResizableArray.h"
//先gcc c27ResizableArray.h 生成.gch文件才能预编译该文件
//使用双引号""时，首先搜索工程文件所在目录，然后再搜索编译器头文件所在目录;而使用尖括号< >时，则是相反的搜索顺序

// typedef struct{
//     int *array;
//     int size;
// }Array;

Array ResArr_creat(int init_size){
    Array arr;
    arr.size = init_size;
    arr.array = (int *)malloc(sizeof(int)*init_size);
    return arr;
}
int ResArr_size(const Array *arr){
    //参数只需提供Array arr的地址就好了，函数内会自动指向size并读值
    return arr->size;//封装关键代码
}
int *ResArr_at(Array *arr,int index){
    if(index >= arr->size){
        array_inflate(arr,index - arr->size + 1);
    }
    return &(arr->array[index]);//封装关键代码
}
void array_inflate(Array *arr,int more_size){
    int *p = (int *)malloc(sizeof(int)*(arr->size + more_size));
    for(int i=0;i<arr->size;i++){
        p[i] = arr->array[i];
    }
    free(arr->array);
    arr->array = p;
    arr->size += more_size;
}
void ResArr_free(Array *arr){
    free(arr -> array);
    arr->array = NULL;
    arr->size = 0;
}



void main(){

    Array a = ResArr_creat(100);
    printf("a.size=%d\n",ResArr_size(&a));
    *ResArr_at(&a,0) = 10;
    printf("a.array[0]=%d\n",*ResArr_at(&a,0));

    ResArr_free(&a);
    
}