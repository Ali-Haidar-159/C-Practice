#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

struct node* createLinkedList(int a[], int size)
{
    int i;
    struct node *temp = NULL, *current = NULL, *head = NULL ;

    for (i = 0; i < size; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));

        temp->value = a[i];
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->next = temp;
            current = current->next;
        }
    }

    return head;
}

int main()
{
    int arr[3] = {10, 20, 30};
    struct node *v;

    v = createLinkedList(arr, 3);

    while (v != NULL)
    {
        printf("Value is : %d\n", v->value);
        v = v->next;
    }

    getch();
    return 0;
}
