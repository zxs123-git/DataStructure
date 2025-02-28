#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int STDataType;
typedef struct Stack
{
    STDataType* _a;
    int _top;
    int _capacity;
}ST;
void StackInit (ST* ps);
void StackPush(ST*ps,STDataType x);
void StackPop(ST*ps);
void StackDestroy(ST* ps);
bool StackEmpty(ST* ps);
int StackSize(ST*ps);
STDataType StackTop(ST*ps);
