#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  clrscr();
  printf("Enter a number:");
  scanf("%d",&a);
  if(a>0)
  {
    printf("The number is positive");
  }
  else if(a<0)
  {
    printf("The number is negative");
  }
  else
  {
    printf("The number is zero");
  }
  getch();
}
