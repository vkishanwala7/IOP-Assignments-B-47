#include <stdio.h>
#include <conio.h>
int main()
{
  char c;
  printf("\nEnter The Character : ");
  scanf("%c",&c);
  c>='a' && c<='z' ? printf("%c is Lower Case Letter",c) : c>='A' && c<='Z' ? printf("%c is Upper Case Letter",c) : printf("%c is not a letter!", c);
  getch();
  return 0;
}
