
struct student
{
    char name [15] ;
    int roll ;
    float mark ;

};

void sortArray (struct student arr [], int len)
{
    int i, j ;
    struct student temp ;

    for (i=0 ; i<len-1 ; i++)
    {
        for (j=0 ; j<len-1 ; j++)
        {
            if (arr[j].roll > arr[j+1].roll)
            {
                temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
    }
}

void printArray (struct student arr [],int len)
{
    int i ;

    for (i= 0 ; i<len ; i++)
    {
        printf("Roll : %d\n",arr[i].roll) ;
        printf("Name : %s\n",arr[i].name) ;
        printf("Mark : %f\n",arr[i].mark) ;
        printf("\n") ;
    }
}

/*void printArray (struct student *p,int len)
{
    int i ;

    for (i= 0 ; i<len ; i++)
    {
        printf("Roll : %d\n",(p+i)->roll) ;
        printf("Name : %s\n",*(p+i).name) ;
        printf("Mark : %f\n",*(p+i).mark) ;
        printf("\n") ;
    }
}*/

void searchStudent (struct student arr[], int len)
{
    int roll, left, middle, right;

    left = 0;
    right = len - 1;

    printf("Enter the item for search : ");
    scanf("%d", &roll);

    while (left <= right)
    {
        middle = (left + right) / 2;

        if (arr[middle].roll == roll)
        {
            printf("Find\n");
            return; // Exiting function since the item is found
        }
        else if (roll > arr[middle].roll)
            left = middle + 1;
        else if (roll < arr[middle].roll)
            right = middle - 1;
    }

    printf("Not found\n"); // If loop exits without finding the item
}
