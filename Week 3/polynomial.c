#include<stdio.h>
/* function to calculate power x^y */
int power(int x, int y){
  int pow=1;
  while (y!=0){
      pow*=x;
      y--;
    }
  return pow;
}
int main()
{
  	int n, x, i, sum = 0;
  
  	scanf ("%d%d", &n, &x);
  	int arr[n+1];
  
  	for (i = 0; i <= n; i++)
      scanf ("%d", &arr[i]);
  	for(i = n; i >=0; i--)
      sum = sum + (arr[i] * power(x, n - i));
  
  	printf ("%d", sum);
    return 0;
}