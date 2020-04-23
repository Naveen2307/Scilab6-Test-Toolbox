#include<stdio.h>
#include <stdlib.h>
#include "transpose.c"
int main(void)
{
double a[]={1,2,3,4,5,6,7,8,9};
double b[9];
transpose(3,b,a);

  for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%f	", b[(i*3)+j]);
		}
	printf("\n");
	}	
 return 0;
}
