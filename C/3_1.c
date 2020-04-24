/*************************************************************************
    > File Name: 3_1.c
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2020年04月20日 星期一 16时00分22秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXSIZE 20
#define OK      1
#define ERROR   0
#define TURE    1
#define FALSE   0

typedef int Status;
typedef int ElemType;

typedef struct{
    ElemType eData[MAXSIZE];
    int iLength;
} SQLIST;

typedef struct Node{
    ElemType data;
    struct Node *next;
} Node;

typedef struct Node *LinkList;

Status GetElem1(SQLIST L, int i, ElemType *e)
{
    if( L.iLength == 0 || i < 0 || i > L.iLength ){
        return ERROR;
    }
    *e = L.eData[i-1];
    return TURE;
}

/* 在链表头插入节点 */
void CreateListHead(LinkList *L, int n)
{
    LinkList p;
    int i;

    srand(time(0)); /* create random data */
    *L = (LinkList)malloc(sizeof(Node));
    (*L)->next = NULL; /* set head node */
    for( i = 0; i < n; i++ ){
        p = (LinkList)malloc(sizeof(Node));
        p->data = rand() % 100 + 1;
        p->next = (*L)->next;
        (*L)->next = p; /* insert to head */
    }
}

/* 单链表的读取 */
Status GetElem(LinkList L, int i, ElemType *e)
{
    int j;
    LinkList p;

    p = L->next; /* p指向链表L的第一个结点 */
    j = 1;       /* 链表计数器 */

    while( p && j < i ){
        p = p->next;  /* p向后移动，指向下一个节点 */
        j++;
    }
    if( !p || j > i ){
        return ERROR;
    }
    *e = p->data; /* 取第i个元素的数据 */

    return OK;
}

/* 单链表的插入 */
Status ListInsert(LinkList *L, int i, ElemType e)
{
    int j;
    LinkList p,s;

    p = *L;
    j = 1;
    while( p && j < i ){  /* p用于寻找第i个节点 */
        p = p->next;
        j++;
    }
    if( !p || j > i ){
        return ERROR;
    }
    s = (LinkList)malloc(sizeof(Node));

    s->data = e;
    s->next = p->next;
    p->next = s; /*将s赋值给p的后继*/

    return OK;
}


int main(int argc, char **argv)
{
    LinkList P;
    ElemType e_list_data;

    CreateListHead(&P,5);

    ListInsert(&P, 3, e_list_data);

    if( OK == GetElem(P, 3, &e_list_data) ){
        printf("%d\n",e_list_data);
    }
    while(P){
        printf("%d\n", P->data);
        P = P->next;
    }

    return 0;
}

