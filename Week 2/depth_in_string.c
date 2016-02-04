#include<stdio.h>
#include<string.h>

int main(void)
{
  int x,y=0,i;
  char str[100];
  scanf("%s",&str);
  x=strlen(str);
  
  for(i=0;i<x;i++)
  {
    if(str[i]=='(')
      y++;
    else if(str[i]==')')
      y--;
    else
      printf("%d ",y);    
  }
  
  printf("#");
 return 0; 
}
