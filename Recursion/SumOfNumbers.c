#include<stdio.h>

int sumOfNumbers (int start , int end)
{
    static int sum  = 0 ;

    if (start > end)
        return sum ;
    else
        {
            sum = sum+start ;
            sumOfNumbers(start+1,end) ;
        }
}

int main ()
{
    int start , end , sum ;

    printf("Enter the first number : ") ;
    scanf("%d",&start) ;
    printf("Enter the last number : ") ;
    scanf("%d",&end) ;

    sum = sumOfNumbers (start,end) ;

    printf("The sum is : %d\n",sum) ;

    getch() ;
    return 0 ;
}
