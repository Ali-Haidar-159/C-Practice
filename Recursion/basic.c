#include <stdio.h>

void printNumber (int x)
{
    if (x>10)
        return ;
    else
    {
        printf("The number is : %d\n",x) ;
        printNumber(x+1) ;
    }
}

int main ()
{
    printNumber(1) ;

    getch() ;
    return 0 ;
}
