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

Status GetElem(SQLIST L, int i, ElemType *e)
{
    if( L.iLength == 0 || i < 0 || i > L.iLength ){
        return ERROR;
    }
    *e = L.eData[i-1];
    return TURE;
}

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

int main(int argc, char **argv)
{
    LinkList P;
    CreateListHead(&P,5);
    while(P){
        printf("%d\n", P->data);
        P = P->next;
    }
    return 0;
}

