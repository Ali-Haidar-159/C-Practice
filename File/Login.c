#include<stdio.h>

struct person
{
    char name [20] ;
    int id ;
    int pinNumber ;
};

int main ()
{
    typedef struct person person ;
    FILE *file ;

    printf("1.Sign up \n2.Login\n") ;

    int choice ;

    printf("Enter your choice : ") ;
    scanf("%d",&choice) ;

    if(choice == 1)
    {
        person p1 ;

        char n [10] ;
        gets (n) ;

        printf("Enter your name : ") ;
        gets(p1.name) ;
        printf("Enter your id : ") ;
        scanf("%d",&p1.id) ;
        printf("Enter your pin : ");
        scanf("%d",&p1.pinNumber) ;


        file = fopen("information.txt","a") ;

        fprintf(file,"%s %d  %d",p1.name,p1.id,p1.pinNumber) ;
        fputs("\n",file) ;

        printf("Your signed up successfully .\n") ;

        fclose(file) ;

    }
    else if (choice == 2)
    {
        file = fopen("information.txt","r") ;
        int id, id2, pin2, pin , flag=0 ;
        char name [20] ;

        printf("Enter your id : ") ;
        scanf("%d",&id) ;
        printf("Enter your pin : ") ;
        scanf("%d",&pin) ;

        while(!feof(file))
        {
            fscanf(file,"%s %d %d",&name,&id2,&pin2) ;

            if (id == id2 && pin == pin2)
            {
                printf("You logged in successfully .\n") ;
                printf("Welcome %s\n",name) ;
                flag++ ;
                break ;
            }
        }

        if (flag == 0)
        {
            printf("Log in failed .\n") ;
        }

    }
    else
    {
        printf("Enter correct command .\n") ;
    }


    getch() ;
    return 0 ;
}
