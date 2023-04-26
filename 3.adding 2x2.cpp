#include <stdio.h>

int main() {
    int rows, cols, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];
    printf("Enter elements of matrix 1:\n");
    for(i = 0; i < rows; i++)
	 {
        for(j = 0; j < cols; j++) 
		{
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of matrix 2:\n");
    for(i = 0; i < rows; i++) 
	{
        for(j = 0; j < cols; j++) 
		{
            scanf("%d", &matrix2[i][j]);
        }
    }
    for(i = 0; i < rows; i++) 
	{
        for(j = 0; j < cols; j++) 
		{
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
for(i = 0; i < rows; i++)
 {
        for(j = 0; j < cols; j++) 
		{
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Resultant matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
return 0;
}
