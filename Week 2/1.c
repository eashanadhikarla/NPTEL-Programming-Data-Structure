#include<stdio.h>
int main()
{
int x = 5, y = 15;

int * p1, * p2;
p1 = &x;  
p2 = &y;
*p1 = 10;          
*p2 = *p1;        
p1 = p2;          
*p1 = 20;          
printf("%d %d",x,y);
return 0;
}
