#include<stdio.h>

void sum (int a , int b)
{
    printf("The sum is : %d\n",(a+b)) ;
}

void sub (int a , int b)
{
    printf("The subtraction is : %d\n",(a-b)) ;
}

void function (void (*ptr)(int,int))
{
    int n1 , n2 ;

    printf("Enter the first value : ") ;
    scanf("%d",&n1) ;
    printf("Enter the second number : ") ;
    scanf("%d",&n2) ;


    (*ptr)(n1,n2) ;
}

int main ()
{
    function (&sum) ;
    function (&sub) ;

    getch () ;
    return 0 ;
}
