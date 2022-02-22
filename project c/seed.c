#include <stdio.h>
# include <string.h>
# include <conio.h>
char* aStrCpy (char dest1[], const char source1[])
{
	
   int i = 0;
  while (source1[i] != '\0')
{
	
   dest1[i] =  source1[i];
    i++;
   
}
   dest1[i] = '\0';
   printf("\n%s inside aStrCpy funcion \n",dest1);
   _getch;
return dest1;
}
int aStrLen(char s[])
{
int i =0; 
int iLength=0;
while (s[i] != '\0')
{
i++;
iLength++;
}
return iLength;
}

int main () {
	 char studName[15];
	  char studNames[15];
     char str1[20], str2[30];   
      char chrString[] = "C Pointers";   
      char chrNewStr[20];  
      char   *chrPtr;  
      char   *chrNewPtr;
       
         
       int i;
       
       int iLen;
       char sStr[20]= "SEED";
       char sSource[20]= "done with count";
       char  sDest[20];
       char sSource1[20]= "well good one";
       char  sDest1[20];
       aStrCpy(sDest1,sSource1);
       printf("\n%s in main transferred from source 1 to dest1 press enter\n",sDest1);
       _getch();
       printf("\n  handling string pointer for arrays counting characters press enter------------------->\n");
       _getch();
       

       iLen = aStrLen(sStr);
        printf("\n %d Length of string is: press enter to close\n",iLen);
       _getch();
       printf("\n  handling string copy for  press enter\n");
       _getch();
       strcpy(sDest,sSource);
       printf("%s",sDest1);
       printf("\n string copied in sDest  press enter\n");
      _getch();
       
 
  
   /* Test c%*/
  printf("\n  now enter 4 characters to c% , need to give slash 0 in program\n");
  for (i = 0; i < 5; i++)    
	   		scanf_s("%c", &studName[i]);
	
		
       	studName[i] = '\0';
	

		printf("%s", studName);

     	getch();
	/* gets tested*/
	printf("\n Testing gets and puts now enter characters Unlike c% no need to give slash 0 in program\n");
	printf("\nPress enter and then give names in 15 char to check gets and puts \n");
	printf("\n Whatever put in gets will show in puts \n");
	_getch();
	gets(studNames);
	puts(studNames);
		printf("\n Testing gets and puts on variable studNames ended \n");
		_getch();

  /*retrun 0*/
  /* Test c%*/
  
  printf("String value pointed by pointer: press enter:");
  _getch();
          chrPtr = chrString; // Pointer is assigned to point at the beginning of character array chrString
   
          chrNewPtr = chrNewStr; //Assign pointer chrNewPtr to point to string chrNewStr
    while (*chrPtr!= '\0')
	 {
      printf("%c", *chrPtr); // displays the value pointed by pointer one by one
      *chrNewPtr++ = *chrPtr++; // copies character by character to new pointer
      
    }
  *chrNewPtr = '\0';
  printf("\n New copied string pointer is :\n");
    puts(chrNewStr);
    
    _getch();
   
   /* length of string*/
	printf("\n %d lenght ofstring chrNewStr\n ", strlen(chrNewStr));
	_getch();
	
 
  printf("to test percent s as syntax press enter:");
  _getch();
  
  
   printf("Enter name: max 19 char ");
   scanf("%19s", str1);

   printf("Enter your website name: max 29 char ");
   scanf("%29s", str2);

   printf("Entered Name: %s\n", str1);
   printf("Entered Website:%s", str2);
   
   return(0);
   
   
}
