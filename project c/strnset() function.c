#include<stdio.h>
#include<string.h>
int main()
{
char str[20] = "Test String";
printf("Original string is : %s", str);
printf("Test string after string n set" \
" : %s", strnset(str,'#',4));
printf("After string n set : %s", str);
return 0;
}