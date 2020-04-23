#include<stdio.h>
#include <stdlib.h>
#include "transpose.h"
int transpose(int n,double *a,double *b)
{
  for(int i=0;i<(n);i++)
	{
		for(int j=0;j<n;j++)
		{
			a[(n*i)+j]=b[(j*n)+i];
		}
	}	
 return 0;
}
