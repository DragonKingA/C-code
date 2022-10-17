#include <stdio.h>
#include <stdlib.h>
#include "c27ResizableArray.h"
//��gcc c27ResizableArray.h ����.gch�ļ�����Ԥ������ļ�
//ʹ��˫����""ʱ���������������ļ�����Ŀ¼��Ȼ��������������ͷ�ļ�����Ŀ¼;��ʹ�ü�����< >ʱ�������෴������˳��

//======================================================================================================================================================================================================
/*�ɱ�����*/

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
    //����forѭ��������memcpy����
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

//======================================================================================================================================================================================================
/*����*/

// typedef struct _node{
//     int value;//�洢����
//     struct _node *next;//�洢��һ������value��ָ��
// }NODE;

typedef struct list_{/*�����ں����еõ��׽��ĵ�ַ*/
    NODE *head;/*�洢�׽��ĵ�ַ,ָ���һ������ڴ�ռ䣨���ڴ��׽�㿪ʼ����ֱ��������һ�����ĵ�ַ��*/
    // NODE *tail;/*�洢β���ĵ�ַ��ָ�����һ�����н����ڴ�ռ�*/
}List;

void add(List *plist,int number){/*����*plist�൱�ڴ���һ�� NODE **phead , ��ָ��ָ��*head,ʹ�ÿ����޸�*head�洢�ĵ�ֵַ*/
    //1.ʵ�ֽ�numberֵ����һ����������(������һ�����)
            NODE *p = (NODE*)malloc(sizeof(NODE));
            p->value=number;//��ֵ
            p->next=NULL;
            
            //2.�������һ������Head��ַ
            NODE *last = plist->head;/*ȡ�� �׽���ַ ���� last �й�ʹ��*/
            printf("���%d  plist -> head = %p\n",number,plist->head);
            if( plist -> head != NULL){
                /*��������last������plist->head��ֻ�ܶ�last�洢�ĵ�ֵַ�޸ģ���֤ plist->head ��ֵ�� �׽��ĵ�ֵַ ����*/
                while(last -> next != NULL){/*�� ͷ��� ��ʼ����ֱ���ҵ� β��NULLָ�룬��ȡ�ÿ�ָ���ַ���˴������Ӵ�*/
                    last = last -> next;
                }

                //3.�����һ����� �� �¿��ٵĽ�� ���ӣ����½���ַ ���� β���ָ��next�ռ䣩
                last -> next = p;
                
            }else{
                plist -> head = p;/*���׽�㲻���ڣ����� ���½��Ľ�� Ϊ �׽��*/
            }
}








//======================================================================================================================================================================================================
void main(){
//һ.�ɱ�������ʵ�֣�֮ǰ�Ŀռ䱻�������ٴ�������Ŀռ䣬Ч�ʽϵ��ҿռ����õͣ�
    Array a = ResArr_creat(100);
    printf("a.size=%d\n",ResArr_size(&a));
    *ResArr_at(&a,0) = 10;
    printf("a.array[0]=%d\n",*ResArr_at(&a,0));
    int number=0;
    int cnt=0;
    // while (number!=-1){
    //     scanf("%d",&number);
    //     if(number!=-1)
    //         *ResArr_at(&a,cnt++)=number;
    // }
    ResArr_free(&a);
    



//��.����(�����ǰ��ռ����������Ч�ʸߣ��ռ������ʸ�)
    //ԭ��һ����㣨�³Ƶ�Ԫ�������ݿռ��ָ��ռ���ɣ�ָ��ռ���һ��ָ��ָ����һ����Ԫ�����ݿռ䣬�Դ��������е�Ԫ������ſ�ָ�뼴��ֹ����
    //һ����Ԫ�����ݿռ��׵�ַ��Ϊ ͷ��head��,��һ��ָ��ָ���ͷ��
    //

    //NODE *head = NULL;
    List list;
    list.head = NULL;
    //1.�������������
    do{
        scanf("%d",&number);
        if(number!=-1){
            add(&list,number);
        }
    }while(number!=-1);

    //2.��������
    NODE *p1;
    int count = 1;
    for(p1 = list.head ; p1 != NULL ; p1 = p1 -> next){//�����������д��
        printf("%0p���%d.value=%d\n",p1,count++,p1->value);
    }


}