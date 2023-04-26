#include <stdio.h>

int main() 
{
    int array[100],size,pos,value,i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (i=0;i<size;i++)
	 {
        scanf("%d", &array[i]);
    }
    printf("Enter the index where you want to insert the element: ");
    scanf("%d",&pos);
    if (pos<0||pos>size)
	 {
        printf("Invalid index!");
        return 0;
    }
    printf("Enter the value to be inserted: ");
    scanf("%d", &value);
    for (i=size;i>pos;i--)
	 {
        array[i] = array[i - 1];
    }
    array[pos]=value;
    printf("Resultant array:\n");
    for (i=0;i<=size;i++) 
	{
        printf("%d ", array[i]);
    }
    return 0;
}

