#include<stdio.h>

int main ()
{
    int arr [] = {5, 3, 9, 1, 7, 2, 8, 4, 6} ;
    int i , j , len , temp , small ;

    len = sizeof(arr)/sizeof(int) ;

    printf("Before sort : \n") ;
    for (i=0 ; i<len ; i++)
    {
        printf("%d ",arr[i]) ;
    }

    for (i=1 ; i<len ; i++)
    {
        int current = arr[i] ;
        int j = i-1 ;

        while(j>=0 && current<arr[j])
        {
            arr[j+1] = arr[j] ;
            j-- ;
        }

        arr[j+1] = current ;
    }

    printf("\nafter sorted : \n") ;
    for (i=0 ; i<len ; i++)
    {
        printf("%d ",arr[i]) ;
    }


    getch () ;
    return 0 ;
}
