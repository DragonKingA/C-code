#include <stdio.h>
#include <stdlib.h>
#include "c27ResizableArray.h"
//先gcc c27ResizableArray.h 生成.gch文件才能预编译该文件
//使用双引号""时，首先搜索工程文件所在目录，然后再搜索编译器头文件所在目录;而使用尖括号< >时，则是相反的搜索顺序

//======================================================================================================================================================================================================
/*可变数组*/

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
    //以下for循环可以用memcpy代替
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
/*链表*/

// typedef struct _node{
//     int value;//存储数据
//     struct _node *next;//存储下一个结点的value的指针
// }NODE;

typedef struct list_{/*便于在函数中得到首结点的地址*/
    NODE *head;/*存储首结点的地址,指向第一个结点内存空间（便于从首结点开始检索直至获得最后一个结点的地址）*/
    // NODE *tail;/*存储尾结点的地址，指向最后一个已有结点的内存空间*/
}List;

void add(List *plist,int number){/*传入*plist相当于传入一个 NODE **phead , 其指向指针*head,使得可以修改*head存储的地址值*/
    //1.实现将number值存入一个链表结点里(开辟下一个结点)
            NODE *p = (NODE*)malloc(sizeof(NODE));
            p->value=number;//存值
            p->next=NULL;
            
            //2.检索最后一个结点的Head地址
            NODE *last = plist->head;/*取出 首结点地址 存入 last 中供使用*/
            printf("结点%d  plist -> head = %p\n",number,plist->head);
            if( plist -> head != NULL){
                /*以下任意last不换成plist->head，只能对last存储的地址值修改，保证 plist->head 的值是 首结点的地址值 不变*/
                while(last -> next != NULL){/*从 头结点 开始遍历直到找到 尾部NULL指针，并取该空指针地址，此处即链接处*/
                    last = last -> next;
                }

                //3.将最后一个结点 与 新开辟的结点 链接（将新结点地址 存入 尾结点指针next空间）
                last -> next = p;
                
            }else{
                plist -> head = p;/*若首结点不存在，即以 该新建的结点 为 首结点*/
            }
}








//======================================================================================================================================================================================================
void main(){
//一.可变数组自实现（之前的空间被抛弃，再创建更大的空间，效率较低且空间利用低）
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
    



//二.链表(申请的前后空间可以相连，效率高，空间利用率高)
    //原理：一个结点（下称单元）由数据空间和指针空间组成，指针空间存放一个指针指向下一个单元的数据空间，以此链接所有单元。最后存放空指针即终止链接
    //一个单元的数据空间首地址称为 头（head）,有一个指针指向该头部
    //

    //NODE *head = NULL;
    List list;
    list.head = NULL;
    //1.构建和填充链表
    do{
        scanf("%d",&number);
        if(number!=-1){
            add(&list,number);
        }
    }while(number!=-1);

    //2.遍历链表
    NODE *p1;
    int count = 1;
    for(p1 = list.head ; p1 != NULL ; p1 = p1 -> next){//链表遍历基本写法
        printf("%0p结点%d.value=%d\n",p1,count++,p1->value);
    }


}