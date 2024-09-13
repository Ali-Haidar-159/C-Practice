#include<stdio.h>

struct node
{
    int value ;
    struct node *next ;
};

int main ()
{
    struct node *nd = NULL, *head = NULL , *head2 = NULL , *temp = NULL ;

    int n, i, value ;

    printf("How many node : ") ;
    scanf("%d",&n) ;

    for (i=0 ; i<n ; i++)
    {
        nd = (struct node *) malloc (sizeof(struct node)) ;

        printf("Enter the %d  value : ",(i+1)) ;
        scanf("%d",&value) ;

        nd -> value = value ;
        nd ->next = NULL ;

        if (head == NULL)
        {
            head = nd ;
            head2 = nd ;
            temp = nd ;
        }
        else
        {
            temp -> next = nd ;
            temp = nd ;
        }
    }

    while (head != NULL)
    {
        printf("The value is: %d\n", head->value);
        head = head->next;
    }

    int arr [n] ;
    int index = -1 ;

    while(head2 != NULL)
    {
        index++ ;

        arr[index] = head2->value ;
        head2 = head2->next ;
    }

    printf("The array is : \n") ;
    for (i=0 ; i<n ; i++)
    {
        printf("%d\t",arr[i]) ;
    }

    getch() ;
    return 0 ;
}
