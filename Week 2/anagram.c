#include <stdio.h>
#include <string.h>
int main(void)
{
  int counter1[127] = {0},counter2[127] = {0};
  char str1[101], str2[101];
  
  scanf("%s%s", str1,str2);
  int i;
  
  if (strlen(str1)!=strlen(str2))
  {
  	printf ("no");
    return 0;
  }
  
  for (i=0; str1[i]!='\0'; i++)
  {
  	counter1[str1[i]]++;
    counter2[str2[i]]++;
  }
  
  for(i=0; i<127; i++)
  {
    if(counter1[i]!=counter2[i]){
      printf("no");
      return 0;}
  }
  printf("yes");
return 0;
}