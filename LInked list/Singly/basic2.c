#include<stdio.h>

struct Nodee
{
    int data ;
    struct Nodee *next ;
};

int main ()
{
    struct Nodee *a = NULL ;
    struct Nodee *b = NULL ;
    struct Nodee *c = NULL ;

    int number , flag=0 ;

    printf ("Enter a number to search : ") ;
    scanf("%d",&number) ;

    a = (struct Node*)malloc (sizeof(struct Nodee)) ;
    b = (struct Node*)malloc (sizeof(struct Nodee)) ;
    c = (struct Node*)malloc (sizeof(struct Nodee)) ;

    a->data = 10 ;
    b->data = 20 ;
    c->data = 30 ;

    a->next = b ;
    b->next = c ;
    c->next = NULL ;

    while (a != NULL)
    {
        //printf ("value : %d\n",a -> data) ;

        if (a->data == number)
        {
            printf("we found the number .\n") ;
            flag++ ;
            break ;
        }

        a = a -> next ;
    }

    free(a) ;
    free(b) ;
    free(c) ;

    if (flag == 0)
    {
        printf("Not present the number \n") ;
    }

    getch () ;
    return 0 ;
}
