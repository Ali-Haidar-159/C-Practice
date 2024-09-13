#include<stdio.h>

struct node
{
    int value ;
    struct node *left  ;
    struct node *right ;
};

struct node* makeNode ()
{
    struct node *newNode = NULL ;

    int data ;

    newNode = (struct node*) malloc(sizeof(struct node)) ;

    printf("Enter the data : ") ;
    scanf("%d",&data) ;

    if (data == -1)
        return 0 ;
    else
    {
        newNode->value = data ;

        printf("------ Enter the left child %d ------\n",data) ;
        newNode->left = makeNode() ;

        printf("------ Enter the right child %d ------\n",data) ;
        newNode->right = makeNode() ;

        return newNode ;
    }
};

void preOrder (struct node *root) //root left right
{
    if (root == 0)
        return ;

    printf("%d ",root->value);
    preOrder(root->left) ;
    preOrder(root->right) ;
}

void inOrder (struct node *root) // left root right
{
    if (root == 0)
        return ;

    preOrder(root->left) ;
    printf("%d ",root->value);
    preOrder(root->right) ;
}

void postOrder (struct node *root) //left right root
{
    if (root == 0)
        return ;

    preOrder(root->left) ;
    preOrder(root->right) ;
    printf("%d ",root->value);
}

int main ()
{
    struct node *root = NULL ;

    root = makeNode() ;

    printf("\n\nThe PreOrder traverse of the tree : \n\n") ;
    preOrder(root) ;

    printf("\n\nThe InOrder traverse of the tree : \n\n") ;
    inOrder(root) ;

    printf("\n\nThe PostOrder traverse of the tree : \n\n") ;
    postOrder(root) ;


    getch() ;
    return 0 ;
}
