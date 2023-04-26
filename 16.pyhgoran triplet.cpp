#include <stdio.h>
int main() 
{
    int limit,m,n,o,count=0;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for (m = 1; m <= limit; m++) 
	{
        for (n = m + 1; n <= limit; n++) 
		{
            for (o = n + 1; o <= limit; o++) 
			{
                if (m * m + n * n == o * o) 
				{
                    printf("%d, %d, %d\n", m, n, o);
                    count++;
                }
            }
        }
    }
    printf("Total Pythagorean triplets found: %d", count);
    return 0;
}

