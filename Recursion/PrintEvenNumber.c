#include<stdio.h>

void printEvenNumber (int start , int last)
{
    if (start > last)
        return ;
    else
    {
        if (start%2 == 0)
        printf("The even number is : %d\n",start) ;
        printEvenNumber(start+1,last) ;
    }
}

int main ()
{
    int start , last ;

    printf("Enter the first number : ") ;
    scanf("%d",&start) ;
    printf("Enter the last number : ") ;
    scanf("%d",&last);

    printEvenNumber(start,last) ;

    getch() ;
    return 0 ;
}
