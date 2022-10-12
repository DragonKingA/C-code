#include <stdio.h>
#include <stdlib.h>
#include "c27ResizableArray.h"
//��gcc c27ResizableArray.h ����.gch�ļ�����Ԥ������ļ�
//ʹ��˫����""ʱ���������������ļ�����Ŀ¼��Ȼ��������������ͷ�ļ�����Ŀ¼;��ʹ�ü�����< >ʱ�������෴������˳��

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
    //����ֻ���ṩArray arr�ĵ�ַ�ͺ��ˣ������ڻ��Զ�ָ��size����ֵ
    return arr->size;//��װ�ؼ�����
}
int *ResArr_at(Array *arr,int index){
    if(index >= arr->size){
        array_inflate(arr,index - arr->size + 1);
    }
    return &(arr->array[index]);//��װ�ؼ�����
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