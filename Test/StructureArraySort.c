#include<stdio.h>
#include "sort.h"

int main ()
{
    struct student arr[] = {
        {"John", 3, 85.5},
        {"Alice", 1, 90.0},
        {"Bob", 2, 80.0},
        {"Ali" , 7, 80.5} ,
        {"Haidar" , 5, 60.5},
        {"Kamal" , 4, 80.5}

    };

    int len = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting:\n");
    printArray(arr, len);

    sortArray(arr, len);

    printf("\nAfter sorting:\n");
    printArray(arr, len);

    printf("Searc Ingine \n\n") ;
    searchStudent(arr,len);

    return 0;
}
