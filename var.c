#include <stdio.h>
#include "var.h"

void var(int t[],int n,float *var)
{
	float val_var=0,M=0;
	int i;
	for (i=0;i<n;i++)
	{
		M += t[i];
	}
	M = M/n;
	for (i=0;i<n;i++)
	{
		val_var += (t[i]-M)*(t[i]-M);
	}
	*var = val_var/n;
}
