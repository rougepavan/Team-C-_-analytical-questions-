#include <stdio.h>
int main() 
{
   int date,month,year;
   printf("Enter a day,month,year: ");
   scanf("%d%d%d",&date,&month,&year);
   if (year % 400 == 0)
    {
      printf("%d/%d/%d is leap year.",date,month,year);
   }
   else if (year % 100 == 0) {
      printf("%d/%d/%d is not a leap year.",date,month,year);
   }
   else if (year % 4 == 0) {
      printf("%d/%d/%d is a leap year.",date,month,year);
   }
   else {
      printf("%d/%d/%d is not a leap year. ",date,month,year);
   }
    return 0;
    
}
