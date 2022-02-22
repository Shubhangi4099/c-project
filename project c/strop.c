#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1 [10], str2 [10], str3[10];
int len,ch,i;
clrscr();
printf("\n Enter First String::");
scanf("%s",&str1);
printf("\n Enter Second String::");
scanf("%s",&str2);
do
{
printf("\n\tMenu\n1::String Copy\n2::String Length\n3::String Compare \n 4::Lower Case\n 5::Upper Case\n 6::String Reverse");
printf("\n Enter Your Choice::");
scanf("%d",&ch);
switch(ch)
{
case 1:strcpy(str3,str1);
printf("\n Copied String is String::%s",str3);
break;
case 2:len=strlen(str1);
printf("\n String 1 Length is::%d",len);
break;
case 3:i=strcmp(str1,str2);
if(i<0)
{
printf("\n String 1 is Less Than String String2 ");
}
else
{
printf("\n String is Greater Than String 2");
}
break;
case 4:strcpy(str3,strlwr(str1));
printf("\n Lower Case String is String::%s",str3);
break;
case 5:strcpy(str3,strupr(str2));
printf("\n Upper Case String is String::%s",str2);
case6:strrev(str1);
printf("\n Reverse String is String::%s",str1);
break;
}
printf("\n Do you want to continue....::(1-YES 0-NO)" );
scanf("%d",&i);
}
while(i==1);
getch();
}
