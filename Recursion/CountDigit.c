#include<stdio.h>

int countDigit(int number)
{
    static int flag = 0;

    if (number == 0)
        return flag;
    else
    {
        flag++;
        return countDigit(number / 10);
    }
}

int main()
{
    int i, number;

    printf("Enter the number : ");
    scanf("%d", &number);

    i = countDigit(number);

    printf("Total digit : %d\n", i);

    return 0;
}
