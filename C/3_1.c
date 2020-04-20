/*************************************************************************
    > File Name: 3_1.c
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2020年04月20日 星期一 16时00分22秒
 ************************************************************************/

#include <stdio.h>

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

Status GetElem(SQLIST L, int i, ElemType *e)
{
    if( L.iLength == 0 || i < 0 || i > L.iLength ){
        return ERROR;
    }
    *e = L.eData[i-1];
    return TURE;
}

int main(int argc, char **argv)
{
    return 0;
}

