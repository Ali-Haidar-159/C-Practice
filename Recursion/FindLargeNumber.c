#include<stdio.h>

int findLargeNumber (int arr [] , int length)
{
    static int largeNumber = -1 ;

    if (length<0)
        return largeNumber ;
    else
    {
        if (largeNumber < arr[length])
           largeNumber = arr[length] ;

           findLargeNumber(arr,length-1) ;
    }
}

int main ()
{
    int arr [] = {10,20,30,55,99,150,80} ;

    int large , length ;

    length = sizeof(arr)/sizeof(int) ;

    large = findLargeNumber(arr,length-1) ;

    printf("The largest number is : %d\n",large) ;

    getch() ;
    return 0 ;
}
