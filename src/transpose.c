#include<stdio.h>
#include <stdlib.h>
#include "transpose.h"
int transpose(int n,int (*a)[n],int b[][n])
{
  for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			*(*(a+i)+j)=b[j][i];
		}
	}	
 return 0;
}
