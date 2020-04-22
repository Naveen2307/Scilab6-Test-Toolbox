#include<stdio.h>
#include <stdlib.h>
#include "transpose.c"
int main(void)
{
int a[][2]={{1,2},{3,4}};
int b[2][2];
transpose(b,a,2);

  for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d	",b[i][j]);
		}
	}	
 return 0;
}
