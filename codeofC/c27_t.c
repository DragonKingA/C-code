#include <stdio.h>
#include <stdlib.h>
/*�����п�ȥʵ�֣�
���Ʋ��룺

1.��ô����һ�� del ������е�ֵΪĳֵ�Ľ�㣬 �õݹ� �� ���printf��scanf�ٴ���һ����������ε���del����ֱ���Ҳ���Ϊֹ
2.��֪list�����׽���ַ�����Խ�β����ַһ�����룬��������Ȳ���
3.��֪ÿ����㶼��һ��value�ռ������ֵ�����Զ���value�ṹ������Ԥ�������������Ϳɹ��û�ѡ�񣬲��ڽṹ�ж���mode�����ֵ��ʾѡ����ŵ���������

*/



/*����*/

//�ṹ������
typedef struct _node{
    int value;//�洢����
    struct _node *next;//�洢��һ������value��ָ��
}NODE;
typedef struct list_{
    NODE *head;/*�洢�׽��ĵ�ַ,ָ���һ������ڴ�ռ䣨���ڴ��׽�㿪ʼ����ֱ��������һ�����ĵ�ַ��*/
    // NODE *tail;/*�洢β���ĵ�ַ��ָ�����һ�����н����ڴ�ռ�*/
}List;

//����ԭ����
void NODE_add(List *plist,int number);
void NODE_print(List *plist);
void NODE_search(List *plist);
void NODE_delete(List *plist);
void list_delete(List *plist);

//ȫ�ֱ�����
int ifadd=1;


void main(){
//����(�����ǰ��ռ����������Ч�ʸߣ��ռ������ʸ�)
    //ԭ��һ����㣨�³Ƶ�Ԫ�������ݿռ��ָ��ռ���ɣ�ָ��ռ���һ��ָ��ָ����һ����Ԫ�����ݿռ䣬�Դ��������е�Ԫ�����ָ��ռ��ſ�ָ�뼴��ֹ����
    //һ����Ԫ�����ݿռ��׵�ַ��Ϊ ͷ��head��,��һ��ָ��ָ���ͷ��
    
    int number=0;
    List list;
    list.head = NULL;
    //1.�������������
    do{
        scanf("%d",&number);
        if(number!=-1){//����-1��ֹͣ
            NODE_add(&list,number);
        }else{
            ifadd = 0;
        }
    }while(number!=-1);

    //2.��������
    NODE_print(&list);

    //3.��������ֵ
    NODE_search(&list);
    
    //4.ɾ������ֵ(�ͷ�ĳ���)
    NODE_delete(&list);

    //NODE_search(&list);

    //5.�����ͷ�
    list_delete(&list);

}






void NODE_add(List *plist,int number){/*����*plist�൱�ڴ���һ�� NODE **phead , ��ָ��ָ��*head,ʹ�ÿ����޸�*head�洢�ĵ�ֵַ*/
            if(!ifadd){//����ֻ�ܴ���һ��
                printf("NODE_add    Error 0: �����ѱ���������Ҫ���������������ͷ�ԭ����\n");
                return;
            }
//----------1.ʵ�ֽ�numberֵ����һ����������(������һ�����)
            NODE *p = (NODE*)malloc(sizeof(NODE));
            p->value=number;//��ֵ
            p->next=NULL;
            
//----------2.�������һ�����ĵ�ַ
            NODE *last = plist->head;
            //printf("���%d  plist -> head = %p\n",number,plist->head);
            if( last != NULL){
                while(last -> next != NULL){
                    last = last -> next;//���ݵ����һ�����
                }

//--------------3.�����һ����� �� �¿��ٵĽ�� ���ӣ����½���ַ ���� β���ָ��next�ռ䣩
                last -> next = p;
                
            }else{
                plist -> head = p;/*���׽�㲻���ڣ����� ���½��Ľ�� Ϊ �׽��*/
            }

            
}


void NODE_print(List *plist){
    if(plist->head){
        NODE *p0 = NULL;
        int cnt=1;
        for(p0 = plist->head;p0;p0 = p0->next){
            printf("���%-5dwith\tvalue %-10d at %-64p\n",cnt++,p0->value,p0);
        }
    }else{
        printf("NODE_print  Error 0: ����δ����\n");
    }
}


void NODE_search(List *plist){
    if(plist->head){
        int number;
        printf("������Ҫ������ֵ��");
        scanf("%d",&number);
        NODE *p0 = NULL;
        int cnt=1,ifnot=0;
        for(p0 = plist->head ; p0 ; p0 = p0->next){
            if(p0->value == number){
                printf("������ ���%-5dwith\tvalue %-10d at %-64p\n",cnt,p0->value,p0);
                ifnot=1;
            }
            if(p0->next) cnt++;//�ǿս��ż���(���ڽ�㱻ɾ�������)
        }
        if(!ifnot)  printf("NODE_search Error 1: (�Ѽ���%d�����)\tvalue %d ������\n",cnt,number);
    }else{
        printf("NODE_search Error 0: ����δ����\n");   
    }
}


void NODE_delete(List *plist){
    if(plist->head){
        NODE *q = NULL, *p = NULL;//q���ڼ�¼��һ������ַ
        int number;
        printf("������Ҫɾ����ֵ��");
        scanf("%d",&number);
        int cnt=1,ifnot=0;

        for(p = plist->head ; p ; q = p , p = p->next ,cnt++){
            if(p->value == number){
                if(!q)  plist->head = p->next;//ɾ���Ľ��Ϊ�׽������,�׽�����Ϊ��һ�����
                else    q->next = p->next;//��ɾ�����׽�㣬����һ����� ת�� ָ����һ�����
                
                printf("��ɾ�� ���%-5dwith\tvalue %-10d at %-64p\n",cnt,number,p);
                free(p);
                ifnot=1;
                break;
            }
        }

        if(!ifnot)  printf("NODE_delete Error 1: (�Ѽ���%d�����)\tvalue %d ������\n",cnt,number);
        
    }else{
        printf("NODE_delete Error 0: ����δ�������׽�㲻����\n");
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
        /*�Ż�ǰ��
        for(p=plist->head ; p ; q=p , p=p->next){
            if(q!=NULL){
                free(q);
                ifnot=1;
            }
        }
        */
        plist->head = NULL;
        if(ifnot) printf("����������\n");
    }else{
        printf("list_delete Error 0: ��������");
    }

}















