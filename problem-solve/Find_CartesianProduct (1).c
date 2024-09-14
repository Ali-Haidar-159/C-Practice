#include <stdio.h>
int main()
{
    int a[10], b[10], c[10], i, set1, set2, j, k;
    printf("                       ** Welcome to our Project of SET ****\n");
    printf("        ____________________________________________________________________ \n\n");
    printf("\nEnter how many elements you want in set 1\n");
    scanf("%d", &set1);
    printf("Enter how many elements you want in set 2\n");
    scanf("%d", &set2);
    printf("Input elements of set 1\n");
    for (i = 0; i < set1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Input elements of set 2\n");
    for (i = 0; i < set2; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("The Cartessian product is = ");
    printf("{");
    for (i = 0; i < set1; i++)
    {
        for (j = 0; j < set2; j++)
        {
            printf("(%d,%d)", a[i], b[j]);
            if( j!= set2-1 ){
           printf(",");
            }

        }
    }
    printf("}");
}


