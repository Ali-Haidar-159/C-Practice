#include<stdio.h>

int factorial (int number)
{
    if (number == 1)
        return 1 ;
    else
    {
        return number * factorial(number-1) ;
    }
}

int main ()
{
    int number , fact ;

    printf("Enter the number : ") ;
    scanf("%d",&number) ;

    fact = factorial(number) ;

    printf("The factorial of %d is : %d\n",number,fact) ;

    getch() ;
    return 0 ;
}
