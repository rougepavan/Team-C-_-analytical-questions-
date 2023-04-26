#include<stdio.h>
int main()
{
int i,j,a,b;
printf("enter a and b values:  ");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
for(j=2;j<i;j++)
{
if(i%j==0)
{
printf("%d\n",i);
break;
}
}
}
return 0;
}
