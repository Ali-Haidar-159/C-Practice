#include <stdio.h>

int main ()
{
    int arr [] = {5, 3, 9, 1, 7, 2, 8, 4, 6} ;
    int i , j , len ;

    len = sizeof(arr)/sizeof(int) ;

    printf("Before sort : \n") ;
    for (i=0 ; i<len ; i++)
    {
        printf("%d ",arr[i]) ;
    }

    for (i=0 ; i<len-1 ; i++)
    {
        for (j=0 ; j<len-1 ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
    }

    printf("\nafter sorted : \n") ;
    for (i=0 ; i<len ; i++)
    {
        printf("%d ",arr[i]) ;
    }

    getch() ;
    return 0 ;
}
