#include<stdio.h>
int main()
{
char * A[] = {"C", "C++", "JAVA", "PHP"};
char **B[] = {A+2, A+1, A+3, A}, ***C;
C = B;
++C;
printf("%s", *(*C+1)+1);
return 0;
}