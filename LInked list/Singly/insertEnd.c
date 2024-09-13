#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value ;
    struct Node *next ;
};

int main ()
{
    struct Node *a=NULL , *b=NULL , *c=NULL  , *head=NULL ;

    a = (struct Node*) malloc (sizeof(struct Node)) ;
    b = (struct Node*) malloc (sizeof(struct Node)) ;
    c = (struct Node*) malloc (sizeof(struct Node)) ;

    if (a==NULL || b==NULL || c==NULL)
        printf("Memory allocatioin failed.\n") ;
    else
        printf("Memory allocated successfull.\n") ;

    head = a ;

    a -> value = 20 ;
    b -> value = 30 ;
    c -> value = 40 ;

    a -> next = b ;
    b -> next = c ;
    c -> next = NULL ;

    printf("Before insert : \n") ;
    while (a != NULL)
    {
        printf("%d\t",a->value) ;
        a = a->next ;
    }

    struct Node *newNode=NULL ;

    newNode = (struct Node*) malloc (sizeof(struct Node)) ;

    c->next = newNode ;
    newNode->value = 100 ;
    newNode->next = NULL ;

    printf("\nAfter insert : \n") ;

    while (head != NULL)
    {
        printf("%d\t",head->value) ;
        head = head->next ;
    }


    getch () ;
    return 0 ;
}

