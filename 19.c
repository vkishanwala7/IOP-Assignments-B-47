#include <stdio.h>
#include <conio.h>
//This program will check if a character is upper case letter or lower case letter or not a letter
int main()
{
  char c;
  printf("\nEnter The Character : ");
  scanf("%c",&c);
  c>='a' && c<='z' ? printf("%c is Lower Case Letter",c) : c>='A' && c<='Z' ? printf("%c is Upper Case Letter",c) : printf("%c is not a letter!", c);
  getch();
  return 0;
}
