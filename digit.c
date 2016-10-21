#include<stdio.h>
#include<conio.h>
void main()
{
int num,count=0;
clrscr();
printf("Enter the number:");
scanf("%d",&num);
while(num)
{
num=num/10;
count++;
}
printf("The number of digit is %d",count);
getch();
}
