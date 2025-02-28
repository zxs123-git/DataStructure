#include"Stack.h"
void Test()
{
    ST st1;
    StackInit(&st1);
    StackPush(&st1,1);
    StackPush(&st1,2);
    StackPush(&st1,3);
    StackPush(&st1,4);
    StackPush(&st1,5);
     while(!StackEmpty(&st1))
    {
        printf("%d\n",StackTop(&st1));
        StackPop(&st1);
    } 
}
int main()
{
    Test();
    return 0;
}