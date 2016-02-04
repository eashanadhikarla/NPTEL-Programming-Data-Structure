#include<stdio.h>

int main(void)
{
	int x,i,sum=0;
	scanf("%d",&x);

	for(i=1;i<x;i++)
	{
		if(x%i==0)
			sum+=i;
	}
	
	if(sum==x)
		printf("yes\n");
	else
		printf("no\n");
return 0;
}