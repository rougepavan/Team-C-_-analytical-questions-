#include <stdio.h>

int main() 
{
    int rows,cols,i,j;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    printf("Enter number of columns: ");
    scanf("%d",&cols);
    int a[rows][cols],b[rows][cols],m[rows][cols];
    printf("Enter elements of matrix 1:\n");
    for(i=0;i<rows;i++)
	 {
        for(j=0;j<cols;j++) 
		{
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of matrix 2:\n");
    for(i=0;i<rows;i++) 
	{
        for(j=0;j<cols;j++) 
		{
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<rows;i++) 
	{
        for(j=0;j<cols;j++) 
		{
            m[i][j]=a[i][j]*b[i][j];
        }
    }
for(i=0;i<rows;i++)
 {
        for(j=0;j<cols;j++) 
		{
            m[i][j]=a[i][j]*b[i][j];
        }
    }
    printf("Resultant matrix:\n");
    for(i=0;i<rows;i++) 
	{
        for(j=0;j<cols;j++) 
		{
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
return 0;
}
