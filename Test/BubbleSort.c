#include<stdio.h>

int main ()
{
    int arr [] = {5,4,1,2,10,7,9} ;
    int i, j, len, temp ;

    len = sizeof(arr)/sizeof(int) ;

    for (i=0 ; i<len ; i++)
    {
        printf("%d ",arr[i]) ;
    }

    printf("\nAfter sort : \n") ;

    for (i=0 ; i<len-1 ; i++)
    {
        for (j=0 ; j<len-1 ; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
    }

    for (i=0 ; i<len ; i++)
    {
        printf("%d ",arr[i]) ;
    }

    getch() ;
    return 0 ;
}
