#include<stdio.h>
#include <stdlib.h>
#include "transpose.c"
int main(void)
{
int a[][3]={{1,2,3},{4,5,6},{7,8,9}};
int b[3][3];
transpose(3,b,a);

  for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d	",b[i][j]);
		}
	printf("\n");
	}	
 return 0;
}
