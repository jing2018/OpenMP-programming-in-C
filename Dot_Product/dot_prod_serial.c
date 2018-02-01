#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 2000000000
int main() 
{
	long long *a,*b,*c;
	a = malloc(SIZE*sizeof(long long));
	b = malloc(SIZE*sizeof(long long));
	c = malloc(SIZE*sizeof(long long));
	long long i;
	long long sum = 0;
/* Leave this loop unchanged */
	for (i = 0; i < SIZE;i++)
	{
		a[i] = i*1;
		b[i] = i*2;
	}

	for (i = 0; i < SIZE;i++)
	{
		c[i] = a[i]*b[i];
	}

	for (i = 0; i < SIZE;i++)
	{
		sum += c[i];
	}	

	printf("sum = %lld\n",sum);
	free(a);
	free(b);
	free(c);
	return 0;
}
