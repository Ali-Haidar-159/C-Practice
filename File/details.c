#include<stdio.h>

int main ()
{
    FILE *file ;
    file = fopen("student.txt","a") ;

    int id ;
    char pass [10] ;

    printf("Enter the pass : ") ;
    gets (pass) ;
    printf("Enter the id : ") ;
    scanf("%d",&id) ;


    fprintf(file,"%d\n%s",id,pass) ;

    getch() ;
    return 0 ;


}
