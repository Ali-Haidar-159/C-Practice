#include<stdio.h>

struct node1
{
    int value ;
    struct node1 *next ;
};

struct node1* makeLinkedList (int ar[],int length)
{
    struct node1 *temp = NULL ;
    struct node1 *head = NULL ;
    struct node1 *current = NULL ;

    int i ;

    for (i=0 ; i<length ; i++)
    {
        temp = (struct node1*)malloc(sizeof(struct node1)) ;

        temp->value = ar[i] ;
        temp->next = NULL ;

        if (head == NULL)
        {
            head = temp ;
            current = temp ;
        }
        else
        {
            current->next = temp ;
            current = temp ;
        }

    }

    return head ;
}

int main ()
{
    int ar [] = {7,8,9,100} ;
    struct node1 *v = NULL ;

    int length = sizeof(ar)/sizeof(int) ;

    v = makeLinkedList(ar,length) ;

    while (v != NULL)
    {
        printf("Value is : %d\n",v->value) ;
        v = v->next ;
    }


    getch() ;
    return 0 ;
}
