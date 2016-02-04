#include <stdio.h>

int main(void)
{
	long n;
	int r, pt=1;
	scanf("%ld",&n);
	
	while(n>0)
	{
		r = n % 10;
		pt = pt * r;
		n = n / 10;
	}	
	printf("%d",pt);
return 0;
}
