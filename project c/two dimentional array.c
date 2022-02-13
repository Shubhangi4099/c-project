#include<stdio.h>
int main()
{
int i,j;
// declaring and Initializing array
int arr[2][2] = {10,20,30,40};
/* Above array can be initialized as below also
arr[0][0] = 10; // Initializing array
arr[0][1] = 20;
arr[1][0] = 30;
arr[1][1] = 40; */
for (i=0;i<2;i++)
{
for (j=0;j<2;j++)
{
// Accessing variables
printf("value of arr[%d] [%d] : %d\n",i,j,arr[i][j]);
}
}
}