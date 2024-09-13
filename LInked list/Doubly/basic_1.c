#include<stdio.h>

struct doublyNode
{
    int value ;
    struct doublyNode *next ;
    struct doublyNode *previous ;
};

int main ()
{
    int position , number , i=1 ;

    printf("Enter the position : ") ;
    scanf("%d",&position) ;
    printf("Enter the number : ") ;
    scanf("%d",&number) ;


    struct doublyNode *a = NULL ;
    struct doublyNode *b = NULL ;
    struct doublyNode *c = NULL ;
    struct doublyNode *first = NULL ;

    a = (struct doublyNode*) malloc (sizeof(struct doublyNode)) ;
    b = (struct doublyNode*) malloc (sizeof(struct doublyNode)) ;
    c = (struct doublyNode*) malloc (sizeof(struct doublyNode)) ;
    first = (struct doublyNode*) malloc (sizeof(struct doublyNode)) ;

    a->value = 10 ;
    b->value = 20 ;
    c->value = 30 ;
    first->value = 0 ;

    a->next = b ;
    b->next = c ;
    c->next = NULL ;
    first->next = a ;

    a->previous = first ;
    b->previous = a ;
    c->previous = b ;
    first->previous = NULL ;

    struct doublyNode *middle = NULL ;
            middle = (struct doublyNode*) malloc (sizeof(struct doublyNode)) ;

    while(first != NULL)
    {
        if (position == i)
        {
            struct doublyNode *middle = NULL ;
            middle = (struct doublyNode*) malloc (sizeof(struct doublyNode)) ;

            middle->value = number ;
            middle->next = first->next ;
            middle->previous = first ;
            first->next = middle ;
            middle->next->previous = middle ;
            break ;
        }

        i++ ;
        first = first->next ;
    }


    printf("\nTraverse from last : \n") ;

    while (c != NULL)
    {
        printf("The value is : %d\n",c->value) ;

        c = c->previous ;
    }



    getch () ;
    return 0 ;
}
