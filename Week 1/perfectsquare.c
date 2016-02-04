#include<stdio.h>

int main(void)
{
	int a,b,count,i,x;
    count=0;
	scanf("%d",&a);
	scanf("%d",&b);

if (a>=100000||b>=100000)
	return 0;
else
	{
		for (i=a;i<=b;i++)
		{
			for(x=1;x<=i;x++)
			{ 
				if(x*x==i)
					count++;
			}
		}
		printf("%d",count);
return 0;
}}