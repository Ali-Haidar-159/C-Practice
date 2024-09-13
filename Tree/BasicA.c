#include<stdio.h>
#include<stdlib.h>

struct tNode
{
    int value ;
    struct tNode *left ;
    struct tNode *right ;
};

struct tNode* makeTree ()
{
    int value ;
    struct tNode *newNode = NULL ;

    printf("\nEnter a number : ") ;
    scanf("%d",&value) ;

    if (value == -1)
    {
        return NULL;
    }
    else
    {
        newNode = (struct tNode*) malloc (sizeof(struct tNode)) ;
        newNode->value = value ;

        printf("\n----Enter the left child of %d --- ",value) ;
        newNode->left = makeTree() ;

        printf("\n---Enter the right child of %d ---- ",value) ;
        newNode->right = makeTree() ;

        return newNode ;
    }
}

void printPreOrder (struct tNode *root)
{
    if (root == 0)
        return ;

    printf("%d ",root->value) ;

    printPreOrder(root->left) ;
    printPreOrder(root->right) ;
}

int main ()
{
    struct tNode *root = NULL ;

    root = makeTree () ;

    printPreOrder(root) ;

    getchar(); // wait for a character input
    return 0 ;
}
