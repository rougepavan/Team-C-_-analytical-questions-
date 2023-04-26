#include<stdio.h>
#include<string.h>
int main()
{
   int i,j;
   char str[25][25],temp[25];
   printf("Enter the words : ");
   for(i=0;i<=5;i++)
     {
     	gets(str[i]);
	 }
   for(i=0;i<=5;i++)
      for(j=i+1;j<=5;j++)
	  {
         if(strcmp(str[i],str[j])>0)
		 {
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
   printf("alphabetical order of words is  :");
   for(i=0;i<=5;i++)
      puts(str[i]);
   
   return 0;
}
