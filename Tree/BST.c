/*#include<stdio.h>

struct BSTnode
{
    int data ;
    struct BSTnode *left ;
    struct BSTnode *right ;
};

struct BSTnode * createTree (struct BSTnode *root , int data)
{
    if (root == 0)
    {
        root = createNewNode(data) ;
        return root ;
    }

    if (data<=root->data)
    {
        root->left = createTree(root->left , data) ;
    }
    else
    {
        root->right = createTree(root->right , data) ;
    }

    return root ;
}

struct BSTnode* createNewNode (int data)
{
    struct BSTnode *newNode = NULL ;

    newNode->data = data ;

    newNode->left = newNode->right = 0 ;

    return newNode ;
};

void displayPreorder (struct BSTnode *root)
{
    if (root == 0)
        return ;

    displayPreorder(root->left) ;
    printf("%d ",root->data) ;
    displayPreorder(root->right) ;
}

int main ()
{
    struct BSTnode *root = NULL ;

    int data=1 ;

    while(data != 0)
    {
        printf("Enter the data : ") ;
        scanf("%d",&data) ;
        root = createTree(root , data) ;
    }

    displayPreorder(root) ;

    getch() ;
    return 0 ;
}*/

#include <stdio.h>
#include <stdlib.h>

struct BSTnode
{
    int data;
    struct BSTnode *left;
    struct BSTnode *right;
};

struct BSTnode *createNewNode(int data)
{
    struct BSTnode *newNode = (struct BSTnode *)malloc(sizeof(struct BSTnode));
    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct BSTnode *createTree(struct BSTnode *root, int data)
{
    if (root == NULL)
    {
        root = createNewNode(data);
        return root;
    }

    if (data <= root->data)
    {
        root->left = createTree(root->left, data);
    }
    else
    {
        root->right = createTree(root->right, data);
    }

    return root;
}

void displayPreorder(struct BSTnode *root)
{
    if (root == NULL)
        return;


    displayPreorder(root->left);
    printf("%d ", root->data);
    displayPreorder(root->right);
}

int main()
{
    struct BSTnode *root = NULL;
    int data = 1;

    while (data != 0)
    {
        printf("Enter the data (enter 0 to stop): ");
        scanf("%d", &data);
        if (data != 0)
        {
            root = createTree(root, data);
        }
    }

    printf("Preorder traversal: ");
    displayPreorder(root);

    return 0;
}

