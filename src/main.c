#include<stdio.h>
#include "add.h"
int main(void)
{
	double ar[1];
	add(ar, 2,5);
  printf("Inside main %f \n", ar[0]);
  return 0;
}
