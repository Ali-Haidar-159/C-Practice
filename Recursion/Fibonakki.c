#include<stdio.h>

void fiboNakki (int numOfFibo)
{
    static int counter=3;
    static int first=1 ;
    static int second=1 ;
    int fibo ;

    if (counter > numOfFibo)
        return ;
    else
    {
        counter++ ;

        fibo = first + second ;
        first = second ;
        second = fibo ;

        printf("%d ",fibo) ;

        fiboNakki(numOfFibo) ;
    }
}

int main ()
{
    int numOfFibo ;

    printf("Enter the number of fibonakki : ") ;
    scanf("%d",&numOfFibo) ;

    printf("1 1 ") ;

    fiboNakki(numOfFibo) ;

    getch() ;
    return 0 ;
}
