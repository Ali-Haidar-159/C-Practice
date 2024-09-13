
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value ;
    struct Node *next ;
};

int searchElement (struct Node *address , int element)
{
    int flag=1 ;

    while (address != NULL)
    {
       if (address->value == element)
        return flag ;

      address = address->next ;
      flag++ ;

    }
    return -1 ;
}

int main ()
{
    struct Node *a=NULL, *b=NULL, *c=NULL, *d=NULL, *e=NULL , *head=NULL ;

    a = (struct Node*) malloc (sizeof(struct Node)) ;
    b = (struct Node*) malloc (sizeof(struct Node)) ;
    c = (struct Node*) malloc (sizeof(struct Node)) ;
    d = (struct Node*) malloc (sizeof(struct Node)) ;
    e = (struct Node*) malloc (sizeof(struct Node)) ;

    int a1, b1, c1, d1, e1 ;

    printf("Enter the value of a : ") ;
    scanf("%d",&a1) ;
    printf("Enter the value of b : ") ;
    scanf("%d",&b1) ;
    printf("Enter the value of c : ") ;
    scanf("%d",&c1) ;
    printf("Enter the value of d : ") ;
    scanf("%d",&d1) ;
    printf("Enter the value of e : ") ;
    scanf("%d",&e1) ;

    a->value = a1 ;
    b->value = b1 ;
    c->value = c1 ;
    d->value = d1 ;
    e->value = e1 ;

    a->next = b ;
    b->next = c ;
    c->next = d ;
    d->next = e ;
    e->next = NULL ;

    head = a ;

    while (a != NULL)
    {
        printf("Element : %d\t",a->value) ;
        a = a->next ;

    }

    int searchResult , element ;

    printf("\nEnter a number for search : ") ;
    scanf ("%d",&element) ;

    searchResult = searchElement (head , element) ;

    printf(searchResult != -1 ? "We found the value at %d position.": "Not found" , searchResult) ;

    getch() ;
    return 0 ;



}
