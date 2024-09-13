#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value ;
    struct Node *next ;
};

void deleteElement (struct Node *address , int value)
{
    struct Node *temp = address ;

    while (temp !=NULL)
    {
        if (temp->next->value == value)
        {
            temp->next = temp->next->next ;
        }
        temp = temp->next ;
    }
}

int main ()
{
    struct Node *a=NULL, *b=NULL, *c=NULL, *d=NULL, *e= NULL, *head=NULL ;

    a = (struct Node *) malloc (sizeof (struct Node)) ;
    b = (struct Node *) malloc (sizeof (struct Node)) ;
    c = (struct Node *) malloc (sizeof (struct Node)) ;
    d = (struct Node *) malloc (sizeof (struct Node)) ;
    e = (struct Node *) malloc (sizeof (struct Node)) ;

    a->value = 10 ;
    b->value = 20 ;
    c->value = 30 ;
    d->value = 40 ;
    e->value = 50 ;

    a->next = b ;
    b->next = c ;
    c->next = d ;
    d->next = e ;
    e->next = NULL ;

    head = a;

    printf("Before insert : \n") ;
    while (head != NULL)
    {
        printf("%d\t",head->value) ;
        head = head->next ;
    }

    deleteElement(a , 30) ;

    head = a;

    printf("After insert : \n") ;
    while (head != NULL)
    {
        printf("%d\t",head->value) ;
        head = head->next ;
    }

    getch () ;
    return 0  ;
}
