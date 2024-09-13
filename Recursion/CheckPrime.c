#include<stdio.h>
#include<stdbool.h>

bool checkPrine (int number,int i)
{
    if (number == i)
        return ;
    else
    {
        if (number%i == 0)
            return false ;
        else
            checkPrine(number, i+1) ;
    }
}

int main ()
{
    int number ;
    bool result = true ;

    printf("Enter a number to check : ") ;
    scanf("%d",&number) ;

    result  = checkPrine(number,2) ;

    if (result == true)
        printf("The number is prime\n") ;
    else
        printf("The number is NOT prime\n") ;

    getch() ;
    return 0 ;
}
