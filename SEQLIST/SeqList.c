#include"SeqList.h"
void SeqListInit(SL*psl)
{
    assert(psl);
    psl->a=NULL;
    //inital size is 0
    psl->size=psl->capacity=0;

    
}
void SeqListDestroy(SL* psl)
{
    assert(psl);
    free(psl->a);
        psl->a=NULL;
        psl->size=psl->capacity=0;
    
}
void TestSeqList1()
{
    SL sl;
    //pass address 
    //passing the address can modify the original value
    //passing the value can not modify the original value
    SeqListInit(&sl);
}
void SeqListPushBack(SL *psl,SLDataType x)
{
    assert(psl);
    //if the size is equal to the capacity,we need to expand the capacity
     
}

