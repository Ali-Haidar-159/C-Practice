#include<stdio.h>

struct node2
{
    int value ;
    struct node2 *next ;
};

int main()
{
    struct node2 *a = NULL ;
    struct node2 *b = NULL ;
    struct node2 *c = NULL ;
    struct node2 *d = NULL ;
    struct node2 *last = NULL ;

    a = (struct node2*)malloc (sizeof(struct node2)) ;
    b = (struct node2*)malloc (sizeof(struct node2)) ;
    c = (struct node2*)malloc (sizeof(struct node2)) ;
    d = (struct node2*)malloc (sizeof(struct node2)) ;
    last = (struct node2*)malloc (sizeof(struct node2)) ;


    a->value = 20 ;
    b->value = 30 ;
    c->value = 40 ;
    d->value = 10 ;
    last->value = 99 ;

    a->next = b ;
    b->next = c ;
    c->next = last ;
    d->next = a ;
    last->next = NULL ;


    while(d != NULL)
    {
        printf("The value is : %d\n",d->value) ;

        d = d->next ;
    }

    getch() ;
    return 0 ;
}
