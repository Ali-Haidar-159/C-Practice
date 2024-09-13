#include<stdio.h>
#include<string.h>

int main ()
{
    char s1 [] = "my name is ali haidar.my name is very short" ;
    //char s1 [] = "ali haidar" ;

    printf("%s\n",strstr(s1,"name")) ;

    //printf("%s\n",strchr(s1,'i')) ;

    getch() ;
    return 0 ;
}
