#include <stdio.h>
#include <conio.h>
int main () 
{
    long long int a;
    printf("Please enter a integer: "); //For input of integer
    scanf("%d", &a);
    if(a%2==0) //Calculations for checking odd and even
    {
        printf("%d is a even number!", a);
    }
    else
    {
        printf("%d is a odd number!", a);
    }
    getch();
    return 0;
}