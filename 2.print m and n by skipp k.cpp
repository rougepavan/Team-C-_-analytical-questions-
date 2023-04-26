#include<stdio.h>
#include<conio.h>
int main()
{
	int m,n,k,i;
	printf("enter the values of m\n  n\n  k\n :  ");
	scanf("%d%d%d",&m,&n,&k);
	for(int i=m;i<=n;i+=k+1)
	{
		printf("%d",i);
	}
	return 0;
}
