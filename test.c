#include <stdio.h>
#include "var.h"
#include "max.h"
#include "min.h"

int main ()
{
	int n=10,t[]={4,9,10,11,12,15,12,9,0,30},val_max,val_min;
	float val_var;
	
	var(t,n,&val_var);
	max(t,n,&val_max);
	min(t,n,&val_min);

	printf("Le maximum du tableau est %d et son minimum est %d.\nLa variance de la série est de %f.\n",val_max,val_min,val_var);

	return 0;
}
