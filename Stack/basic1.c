
#include <stdio.h>

int Stack[3] ;
int top =-1 ;

void push (int value)
{
    if (top < 2)
    {
        top++;
        Stack[top] = value ;
        printf("Value added : %d\n",value) ;
    }
    else
        printf("Exception in push.") ;
}

int peak ()
{
    if(Stack >= 0)
    {
        return Stack[top] ;
    }
    else
        printf("Exception found in peak.") ;
}

int pop ()
{
    if (Stack >= 0)
    {
        int value = Stack[top] ;
        top = top-1 ;
        return value ;
    }
    else
        printf("Exception in pop .") ;
}

int main ()
{
    push(10) ;
    push(20) ;
    push(30) ;
    push(40) ;

    printf("\nTop value is : peak : %d",peak()) ;

    printf("\nDeleted : %d",pop()) ;

    getch () ;
    return 0;
}
