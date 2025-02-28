#include"Stack.h"
//l0-register
//l1-cache area 
//l2-cache area
//l3-cache area
//l4-dram
//入栈 入数据在栈顶
//出栈 出数据在栈顶
//栈的特点:先进后出 Last In First Out
//内存区域的划分 栈帧
//栈 用数组实现 
void StackInit (ST* ps)
{
    assert(ps);
    ps->_a=NULL;
    ps->_top=0;
    ps->_capacity=0;
}
    // dress of the array has 2 ways to set
//top=0/top=-1; -1 在栈顶元素 0在栈顶元素的下一个位置
void StackPush(ST*ps,STDataType x)
{
    if(ps->_top==ps->_capacity)
    {
        //expand the capacity
        //1.apply for a new space
        int newCapacity=ps->_capacity==0?4:2*ps->_capacity;
        //expand the space
        STDataType* tmp=(STDataType*)realloc(ps->_a,newCapacity*sizeof(STDataType));
        //check the space is enough or not
        if(tmp==NULL)
        {
            printf("realloc fail\n");
            exit(-1);
        }
        ps->_a=tmp;
        ps->_capacity=newCapacity;
    }
    ps->_a[ps->_top]=x;
    ps->_top++;
}
void StackPop(ST*ps)
{
    assert(ps);
    assert(!StackEmpty(ps));
   --ps->_top;
}
void StackDestroy(ST* ps)
{
    free(ps->_a);
    ps->_a=NULL;
    ps->_top=ps->_capacity=0;
}
bool StackEmpty(ST* ps)
{
   if(ps->_top<=0)
    {
         return true;
    }
    return false;
}
int StackSize(ST*ps)
{
   assert(ps);
    return ps->_top;
}
STDataType StackTop(ST*ps)
{
    assert(ps);
    assert(!StackEmpty(ps));
    return ps->_a[ps->_top-1];

}