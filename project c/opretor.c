#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,temp;
printf("Enter the values of num1 and num2:");
scanf("%d%d",&num1,&num2);
temp=num1;
num1=num2;
num2=temp;
printf("\n After exchanging the values are: num1=%d and num2=%d",num1,num2);
getch();
}
