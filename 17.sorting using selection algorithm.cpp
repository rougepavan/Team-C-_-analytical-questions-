#include <stdio.h>
int main()
{
    int a[100],size,i,j,min_index,temp;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (i=0;i<size;i++) {
        scanf("%d", &a[i]);
    }
    for (i=0;i<size-1;i++) 
	{
        min_index=i;
        for (j=i+1;j<size;j++)
		 {
            if (a[j]<a[min_index]) 
			{
                min_index = j;
            }
        }
        temp=a[i];
        a[i]=a[min_index];
        a[min_index] = temp;
    }
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < size; i++)
	 {
        printf("%d ",a[i]);
    }
    return 0;
}

