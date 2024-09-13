#include<stdio.h>
#define CAPACITY 3

int stack [CAPACITY] ;
int top=-1;

void pushItem (int item)
{
    if (top < CAPACITY-1)
    {
        top = top + 1 ;
        stack[top] = item ;

        printf("Item : %d added successfully in the stack\n",item) ;
    }
    else
        printf("No space \n") ;
}

int popItem ()
{
    if (top != -1)
    {
        int item = stack[top] ;
        top-- ;
        return item ;
    }
    else
        printf("The stack is empty\n") ;

        return -1 ;
}

int peakItem ()
{
    if (top != -1)
    {
        return stack[top] ;
    }
    else
    {
        printf("The stack is empty.\n") ;
        return -1 ;
    }
}

int main ()
{
    printf("The stack is created.\n") ;

    popItem () ;

    pushItem(10) ;
    pushItem(20) ;
    pushItem(30) ;
    pushItem(40) ;
    pushItem(50) ;

    printf("The removed value is : %d\n",popItem ());

    printf("The last value or topn space value is : %d\n",peakItem()) ;

    getch () ;
    return 0 ;
}
