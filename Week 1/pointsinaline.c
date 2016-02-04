#include <stdio.h>

int main(void)
{
	float X1, Y1, X2, Y2, X3, Y3, slope1, slope2;
	scanf("%f"" ""%f"" ""%f"" ""%f"" ""%f"" ""%f",&X1,&Y1,&X2,&Y2,&X3,&Y3);
	
	slope1 = (Y2-Y1)/(X2-X1);
	slope2 = (Y3-Y2)/(X3-X2);
	
	if(slope1 == slope2)
		printf("Yes");
	else
		printf("No");
return 0; 
}