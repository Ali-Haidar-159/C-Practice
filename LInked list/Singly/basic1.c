#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value ;
    struct Node *next ;
};

int main ()
{
    struct Node *a = NULL ;
    struct Node *b = NULL ;
    struct Node *c = NULL ;

    a = (struct Node*) malloc (sizeof(struct Node));
    b = (struct Node*) malloc (sizeof(struct Node));
    c = (struct Node*) malloc (sizeof(struct Node));

    if (a == NULL || b == NULL || c == NULL)
        printf("Memory allocation failed.\n");
    else
        printf("Memory allocation success.\n") ;

    a -> value = 10 ;
    b -> value = 20 ;
    c -> value = 30 ;

    a -> next = b ;
    b -> next = c ;
    c -> next = NULL ;

    while (a != NULL)
    {
        printf ("value : %d\n",a -> value) ;
        a = a -> next ;
    }

    free(a) ;
    free(b) ;
    free(c) ;

    getch () ;
    return 0 ;
}
