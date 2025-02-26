#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define N 10000
typedef int SLDataType;
//dynamic sequential list
//动态顺序表

/* struct SeqList
{
    SLDataType a[N];
    int size;//number of data entries


}; */

//capacity expansion 
///why the expansion is 2 times the original capacity?
//if the expansion is realatively small, it reduce the effectiveness
//if the expansion is realatively large, it will waste the space

typedef struct SeqList
{
    SLDataType* a;
    int size;//number of data entries
    int capacity;//capacity （stroage space size)

}SL;
void SeqListInit(SL* psl);
void SeqListDestroy(SL* psl);
//push front
void SeqListPushFront(SL* psl, SLDataType x);
//push back
void SeqListPushBack(SL* psl, SLDataType x);
//pop front
void SeqListPopFront(SL* psl);
//Pop Back
void SeqListPopBack(SL* psl);