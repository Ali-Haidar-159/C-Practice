#include<stdio.h>

struct node
{
    int data ;
    struct node * left ;
    struct node * right ;
};

struct node* create ()
{
    int data ;
    struct node *newNode = NULL ;

    newNode = (struct node*) malloc (sizeof(struct node)) ;

    printf("Enter the data of node : ") ;
    scanf("%d",&data) ;

    if (data == -1)
        return 0 ;
    else
    {
        newNode->data = data ;

        printf("---Enter the left child of %d  \n",data) ;
        newNode->left = create () ;

        printf("---Enter the right child of %d  \n",data) ;
        newNode->right = create () ;

        return newNode ;
    }
};

int main ()
{
    struct node *root ;

    root = create () ;

    getch () ;
    return 0 ;
}
