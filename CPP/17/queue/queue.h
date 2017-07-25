/*************************************************************************
    > File Name: queue.h
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2017年07月25日 星期二 10时08分35秒
 ************************************************************************/

#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <stdbool.h>

typedef int Item;

#define MAXQUEUE 10

typedef struct node{
    Item   item;
    struct node *next;
}Node;

typedef struct queue{
    Node *front;
    Node *rear;
    int  items;
}Queue;

void InitializeQueue( Queue *pq );

bool QueueIsFull( const Queue *pq );

bool QueueIsEmpty( const Queue *pq );

int QueueItemCount( const Queue *pq );

bool EnQueue( Item item, Queue *pq );

bool DeQueue( Item *pitem, Queue *pq );

void EmptyTheQueue( Queue *pq );

#endif //_QUEUE_H_

