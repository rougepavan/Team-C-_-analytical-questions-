#include <stdio.h>
int main ()
{
    int n=0,i=0,a=0,b=0,temp=0;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements\n");
    for (i=0;i<n;i++)
    {
        scanf ("%d",&array[i]);
    }
 
    printf ("The array elements are : \n");
    for (i=0;i<n;i++)
    {
        printf ("%d\t",array[i]);
    }
    printf ("\n");
    a=array[0];
    b=array[1];
    if (a<b)
    {
        temp=a;
        a=b;
        b= temp;
    }
 
    for (i=2;i<n;i++)
    {
        if (array[i]>a)
        {
            b=a;
            a=array[i];
        }
        else if (array[i]>b && array[i]!=a)
        {
            b=array[i];
        }
    }
 
    printf ("The FIRST LARGEST = %d\n",a);
    printf ("THE SECOND LARGEST = %d\n",b);
 
    return 0;
}
