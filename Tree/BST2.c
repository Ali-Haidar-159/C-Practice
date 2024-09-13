#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct bNode
{
    int value ;
    struct bNode *left ;
    struct bNode *right ;
};
struct bNode* makeNewNodeBST(int value) ; //function protoType .

struct bNode* makeBSTree (struct bNode*root1 , int value)
{
    if (root1 == 0)
    {
        root1 = makeNewNodeBST(value) ;
        return root1 ;
    }

    if (value <= root1->value)
    {
        root1->left = makeBSTree(root1->left , value) ;
    }
    else
    {
        root1->right = makeBSTree(root1->right , value) ;
    }

    return root1 ;
};

struct bNode* makeNewNodeBST(int value)
{
    struct bNode *newNode = NULL;
    newNode = (struct bNode*) malloc(sizeof(struct bNode));

    if (newNode == NULL)
    {
        exit(1);
    }

    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}
void printInorder (struct bNode *root)
{
    if (root == NULL)
        return ;

    printInorder(root->left) ;
    printf("%d ",root->value) ;
    printInorder(root->right) ;
}

int main ()
{
    struct bNode *root = NULL ;

    int data=1 ;

    while(data != 0)
    {
        printf("Enter the value of tree : ") ;
        scanf("%d",&data) ;

        if (data != 0)
        root = makeBSTree(root , data) ;
    }

    printf("Display the value Inorder : \n") ;
    printInorder(root) ;

    getch () ;
    return 0 ;
}
