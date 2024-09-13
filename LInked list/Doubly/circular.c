#include<stdio.h>

struct nodde
{
    int value ;
    struct nodde *next ;
};

int main ()
{
    int n , i , data ;

    printf("Enter how many node : ") ;
    scanf ("%d",&n) ;

    struct nodde *head = NULL ;
    struct nodde *temp = NULL ;
    struct nodde *newNode = NULL ;

    for (i=0 ; i<n ; i++)
    {
        newNode = (struct nodde *) malloc (sizeof(struct nodde)) ;

        printf("Enter the value of %d th node : ",(i+1)) ;
        scanf(" %d",&data) ;

        newNode->value = data ;

        if (head == NULL)
        {
            head = temp = newNode ;
        }
        else
        {
            temp -> next = newNode ;
            temp = newNode ;
        }
    }

    newNode -> next = head ;
    temp = head ;

    //while (temp->next != head)
    for (i=0 ; i<n ; i++)
    {
        printf("The value is : %d\n",temp->value) ;

        temp = temp->next ;
    }

    getch () ;
    return 0 ;
}
