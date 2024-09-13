#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value;
    struct Node *next;
};

void insertElement(struct Node *head1, int position, int value1)
{
    struct Node *temp = head1;
    struct Node *newNode = (struct Node*) malloc (sizeof(struct Node));

    newNode->value = value1;
    newNode->next = NULL;

    int counter = 0;

    while (temp != NULL)
    {
                counter++;
        if (counter == position)
        {
            newNode->next = temp->next;
            temp->next = newNode;

        }

        temp = temp->next;

    }


}

int main()
{
    struct Node *a=NULL, *b=NULL, *c=NULL, *d=NULL, *e=NULL ;

    a = (struct Node *) malloc (sizeof (struct Node)) ;
    b = (struct Node *) malloc (sizeof (struct Node)) ;
    c = (struct Node *) malloc (sizeof (struct Node)) ;
    d = (struct Node *) malloc (sizeof (struct Node)) ;
    e = (struct Node *) malloc (sizeof (struct Node)) ;

    a->value = 10 ;
    b->value = 20 ;
    c->value = 30 ;
    d->value = 50 ;
    e->value = 60 ;

    a->next = b ;
    b->next = c ;
    c->next = d ;
    d->next = e ;
    e->next = NULL ;

    struct Node *head = a;

    printf("Before insert : \n") ;

    while (head != NULL)
    {
        printf("%d\n", head->value) ;
        head = head->next ;
    }


    head = a;

    insertElement(head, 3, 40);

    head = a;

    printf("After insert : \n") ;

    while (head != NULL)
    {
        printf("%d\n", head->value) ;
        head = head->next ;
    }

    getch();
    return 0;
}
