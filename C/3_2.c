/*************************************************************************
    > File Name: 3_2.c
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2020年05月02日 星期六 23时43分02秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define OK      1
#define ERROR   0
#define TURE    1
#define FALSE   0
#define MAXSIZE 1000

typedef int Status;
typedef int ElemType;

typedef struct{
    ElemType data;
    int cur;
} Component,StaticLinkList[MAXSIZE];

/* 静态链表的初始化 */
Status InitList(StaticLinkList space)
{
    int i;
    for( i = 0; i < MAXSIZE; i++ ){
        space[i].cur = i + 1;
    }

    space[MAXSIZE - 1].cur = 0; /* 目前静态链表为空，最后一个元素的cur为0 */
    return OK;
}

/* 静态链表结点申请 */
int Malloc_SLL(StaticLinkList space)
{
    int i = space[0].cur;

    if( space[0].cur ){
        space[0].cur = space[7].cur; /*在备用链表上取得第一个结点作为待插入的新结点*/
    }
}

/* 计算链表元素个数 */
int ListLength(StaticLinkList L )
{
    int j = 0;
    int i = L[MAXSIZE - 1].cur;

    while(i){
        i = L[i].cur;
        j++;
    }

    return j;
}

/* 插入新的元素 */
Status ListInsert(StaticLinkList L, int i, ElemType e)
{
	int l,j,k;

	k = MAXSIZE - 1; /* 最后一个元素的下标 */

	if(i < 1 || i > ListLength(L) + 1){
		return ERROR;
	}

	j = Malloc_SLL(L);
	if( j ){
		L[j].data = e;

		for( l = 1; l <= i - 1; l++ ){ /* 找到第i个元素之前的位置 */
			k = L[k].cur;
		}
		L[j].cur = L[k].cur;
		L[k].cur = j;

		return OK;
	}

	return ERROR;
}

int main(int argc, char **argv)
{
    return 0;
}
