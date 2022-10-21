#include <stdio.h>
#include <stdlib.h>
/*以下有空去实现：
完善猜想：

1.怎么做到一次 del 清除所有的值为某值的结点， 用递归 或 拎出printf和scanf再创建一个函数并多次调用del函数直至找不到为止
2.已知list存入首结点地址，尝试将尾结点地址一并存入，方便遍历等操作
3.已知每个结点都有一个value空间存入数值，尝试定义value结构，里面预定各种数据类型可供用户选择，并在结构中定义mode存放数值表示选定存放的数据类型

*/



/*链表*/

//结构定义区
typedef struct _node{
    int value;//存储数据
    struct _node *next;//存储下一个结点的value的指针
}NODE;
typedef struct list_{
    NODE *head;/*存储首结点的地址,指向第一个结点内存空间（便于从首结点开始检索直至获得最后一个结点的地址）*/
    // NODE *tail;/*存储尾结点的地址，指向最后一个已有结点的内存空间*/
}List;

//函数原型区
void NODE_add(List *plist,int number);
void NODE_print(List *plist);
void NODE_search(List *plist);
void NODE_delete(List *plist);
void list_delete(List *plist);

//全局变量区
int ifadd=1;


void main(){
//链表(申请的前后空间可以相连，效率高，空间利用率高)
    //原理：一个结点（下称单元）由数据空间和指针空间组成，指针空间存放一个指针指向下一个单元的数据空间，以此链接所有单元。最后指针空间存放空指针即终止链接
    //一个单元的数据空间首地址称为 头（head）,有一个指针指向该头部
    
    int number=0;
    List list;
    list.head = NULL;
    //1.构建和填充链表
    do{
        scanf("%d",&number);
        if(number!=-1){//读到-1就停止
            NODE_add(&list,number);
        }else{
            ifadd = 0;
        }
    }while(number!=-1);

    //2.遍历链表
    NODE_print(&list);

    //3.检索链表值
    NODE_search(&list);
    
    //4.删除链表值(释放某结点)
    NODE_delete(&list);

    //NODE_search(&list);

    //5.链表释放
    list_delete(&list);

}






void NODE_add(List *plist,int number){/*传入*plist相当于传入一个 NODE **phead , 其指向指针*head,使得可以修改*head存储的地址值*/
            if(!ifadd){//链表只能创建一次
                printf("NODE_add    Error 0: 链表已被创建，若要创建新链表，请先释放原链表\n");
                return;
            }
//----------1.实现将number值存入一个链表结点里(开辟下一个结点)
            NODE *p = (NODE*)malloc(sizeof(NODE));
            p->value=number;//存值
            p->next=NULL;
            
//----------2.检索最后一个结点的地址
            NODE *last = plist->head;
            //printf("结点%d  plist -> head = %p\n",number,plist->head);
            if( last != NULL){
                while(last -> next != NULL){
                    last = last -> next;//传递到最后一个结点
                }

//--------------3.将最后一个结点 与 新开辟的结点 链接（将新结点地址 存入 尾结点指针next空间）
                last -> next = p;
                
            }else{
                plist -> head = p;/*若首结点不存在，即以 该新建的结点 为 首结点*/
            }

            
}


void NODE_print(List *plist){
    if(plist->head){
        NODE *p0 = NULL;
        int cnt=1;
        for(p0 = plist->head;p0;p0 = p0->next){
            printf("结点%-5dwith\tvalue %-10d at %-64p\n",cnt++,p0->value,p0);
        }
    }else{
        printf("NODE_print  Error 0: 链表未创建\n");
    }
}


void NODE_search(List *plist){
    if(plist->head){
        int number;
        printf("请输入要检索的值：");
        scanf("%d",&number);
        NODE *p0 = NULL;
        int cnt=1,ifnot=0;
        for(p0 = plist->head ; p0 ; p0 = p0->next){
            if(p0->value == number){
                printf("检索到 结点%-5dwith\tvalue %-10d at %-64p\n",cnt,p0->value,p0);
                ifnot=1;
            }
            if(p0->next) cnt++;//非空结点才计数(存在结点被删除的情况)
        }
        if(!ifnot)  printf("NODE_search Error 1: (已检索%d个结点)\tvalue %d 不存在\n",cnt,number);
    }else{
        printf("NODE_search Error 0: 链表未创建\n");   
    }
}


void NODE_delete(List *plist){
    if(plist->head){
        NODE *q = NULL, *p = NULL;//q用于记录上一个结点地址
        int number;
        printf("请输入要删除的值：");
        scanf("%d",&number);
        int cnt=1,ifnot=0;

        for(p = plist->head ; p ; q = p , p = p->next ,cnt++){
            if(p->value == number){
                if(!q)  plist->head = p->next;//删除的结点为首结点的情况,首结点更换为下一个结点
                else    q->next = p->next;//若删除非首结点，则上一个结点 转而 指向下一个结点
                
                printf("已删除 结点%-5dwith\tvalue %-10d at %-64p\n",cnt,number,p);
                free(p);
                ifnot=1;
                break;
            }
        }

        if(!ifnot)  printf("NODE_delete Error 1: (已检索%d个结点)\tvalue %d 不存在\n",cnt,number);
        
    }else{
        printf("NODE_delete Error 0: 链表未创建，首结点不存在\n");
    }
}



void list_delete(List *plist){
    if(plist->head){
        NODE *q=NULL,*p=NULL;
        int ifnot=0;
        for(p=plist->head ; p ; p=q){
                q=p->next;
                free(p);
                ifnot=1;
        }
        /*优化前：
        for(p=plist->head ; p ; q=p , p=p->next){
            if(q!=NULL){
                free(q);
                ifnot=1;
            }
        }
        */
        plist->head = NULL;
        if(ifnot) printf("链表清除完毕\n");
    }else{
        printf("list_delete Error 0: 链表不存在");
    }

}















