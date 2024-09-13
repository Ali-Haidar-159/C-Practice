#include<stdio.h>

int main ()
{
    int a= 0 ;
    int i = 0 ;

    ali :
        printf("This is label : \n") ;

        for (; i<=10 ;)
        {
            printf("%d\n",i) ;
            i++ ;

            if (i == 5)
                goto ali ;

        }

    getch () ;
    return 0 ;
}
