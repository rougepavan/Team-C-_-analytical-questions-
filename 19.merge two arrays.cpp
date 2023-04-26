#include <stdio.h>
#include <stdlib.h> 
int main(void)
{
    int i, n, j, k;
    printf("Enter the size of the first array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the first array: \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d",&k);
    int b[k];
    printf("Enter the elements of the second array: \n");
    for (j = 0; j < k; j++)
    {
        scanf("%d", &b[j]);
    }
    int c[n+k];
    i=j= 0;
    int in;
    for (in=0;in<n+k;in++)
    {
        if (i<n&&j<k)
        {
            if (a[i]<b[j])
            {
                c[in]=a[i];
                i++;
            }
            else
            {
                c[in]=b[j];
                j++;
            }
        }
        else if (i<n)
        {
            c[in]=a[i];
            i++;
        }
        else
        {
            c[in]=b[j];
            j++;
        }
    }
    printf("The merged array is: \n");
    for (in=0;in<n+k;in++)
    {
        printf("%d ",c[in]);
    }
    printf("\n");
    return 0;
}
