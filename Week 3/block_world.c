#include<stdio.h>

int power(int a, int b)
{
	int result, t=1;
  	for(result=1; result<=b; result++)
      t=a*t;
  return t;
      
}
int main(void)
{
	int n,x;
	scanf("%d", &n);
	x=power(2,n);
	printf("%d",--x);
	return 0;
}