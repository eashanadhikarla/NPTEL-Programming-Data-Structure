#include<stdio.h>
int main()
{
char  *name="INDIA";                                              
int   x;                                                
char  *cptr = name;                                                                    
while(*cptr != '\0')                                         
{                                                            
    cptr++;                                                  
}                                                            
x = cptr - name;                                        
printf("%d", x);        
return 0;
}