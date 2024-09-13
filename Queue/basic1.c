#include<stdio.h>
#define CAPACITY 6

int queue[CAPACITY] ;

int total=0 , front=0 , rear = -1 ;

void enqueue (int item)
{
    if (total != CAPACITY)
    {
        rear = (rear + 1) % CAPACITY ; //[ circularIndex = index % length ]
        total++ ;

        queue[rear] = item ;

        printf("\nItem : %d added successfully \n",item) ;
    }
    else
        printf("\nNo capacity.\n") ;
}

int dequeue ()
{
    if (total != 0)
    {
        int frontValue = queue[front] ;

        queue[front] = -1 ;
        front = (front+1) % CAPACITY ;
        total-- ;

        printf("\nItem : %d deleted.\n",frontValue) ;
    }
    else
        return -1 ;
}

void printQueue ()
{
    int i ;

    for (i=0 ; i<CAPACITY ; i++)
    {
        printf("%d\t",queue[i]) ;
    }
}

int main ()
{
    enqueue(10) ;
    enqueue(20) ;
    enqueue(30) ;
    enqueue(40) ;
    enqueue(50) ;
    enqueue(60) ;
    enqueue(100) ;

    printQueue() ;

    dequeue () ;

    printQueue () ;

    enqueue(100) ;

    printQueue() ;

    getch() ;
    return 0 ;
}
