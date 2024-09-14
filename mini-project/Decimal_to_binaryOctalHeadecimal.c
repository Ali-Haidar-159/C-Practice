#include<stdio.h>
#include <stdlib.h>
#include<string.h>
 // include stdio.h library
void convert_to_x_base(int, int);

int main(void)
{
    int num, choice, base;
    char ch[100];
    printf ("\n\n\t\t          ..........WELCOME TO OUR NUMERICAL METHOD PROJECT..........   \n");


    while(1)
    {
        printf("\n\nSelect conversion: \n\n");
        printf("1. Decimal to binary. \n");
        printf("2. Decimal to octal. \n");
        printf("3. Decimal to hexadecimal. \n");
        printf("4. Exit. \n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                base = 2;
                break;
            case 2:
                base = 8;
                break;
            case 3:
                base = 16;
                break;
            case 4:
                printf("Exiting ...");
                exit(1);
            default:
                printf("Invalid choice.\n\n");
                continue;
        }

        printf("Enter a number: ");
        scanf("%s", &ch);
        int len=strlen(ch);
        if(checkValidity(ch,len)){ //checkvalidity jodi 1 return kore tahole true/kaj korbe,, 0 korle false
        printf("Result = ");
        num=atoi(ch); //atoi function string ke number e convert kore
        convert_to_x_base(num, base);
        }
        else{
            printf("\nWrong Input.\n");
        }

        printf("\n\n");
    }

    return 0; // return 0 to operating system
}

int checkValidity(char ch[],int len){
    int i;
    for(i=0; i<len; i++){
        if(ch[i]<48 || ch[i]>57){  //ascii value diye check krtesi,,egula 0 theke 9 er moddhe kina
            return 0;
        }
    }
    return 1;
}

void convert_to_x_base(int num, int base)
{
    int rem;

    // base condition
    if (num == 0)
    {
        return;
    }

    else
    {
        rem = num % base; // get the rightmost digit
        convert_to_x_base(num/base, base);  // recursive call
        if(base == 16 && rem >= 10)
        {
            printf("%c", rem+55);
        }

        else
        {
            printf("%d", rem);
        }
    }

}
