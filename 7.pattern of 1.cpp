#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 3; i++) 
	{
        for (j = 1; j <= i; j++) {
            printf("1");
        }
        printf("\n");
    }
    for(i=2;i>1;i--)
     {
     	for(j=2;j>=1;j--)
     	{
     		printf("1");
		 }
		 printf("\n");
	 }
    return 0;
}

