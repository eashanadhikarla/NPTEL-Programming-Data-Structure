#include <stdio.h>

int bubble_sort(int *, int);
int main (void)
{
	int original[10], duplicate[10], t;
	scanf ("%d", &t);
	for (int k = 0; k < t; k++)
	{
        for(int i=0; i<10; i++)
        {
            scanf("%d",&original[i]);
            duplicate[i] = original[i];
        }
	
        bubble_sort(original,10);
	
        for(int j=0; j< 10; j++)
        {
            if(duplicate[j] == original[2])
            {
                printf("%d",j + 1);
                break;
            }
        if(k!=t-1)
            printf("\n");
	}
}
return 0;
}

int bubble_sort(int* str, int n)
{
	int i,j,temp;
	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(str[i]>str[j])		
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	return 0;
}
