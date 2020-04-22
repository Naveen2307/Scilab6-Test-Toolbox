#include<stdio.h>
#include <stdlib.h>
#include "transpose.h"
int transpose(int (*a)[2],int b[][2],int n)
{
  for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			*(*(a+i)+j)=b[j][i];
		}
	}	
 return 0;
}
