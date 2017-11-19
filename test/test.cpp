#include <stdio.h>
#include "Random.h"

int main()
{
	Random rd;
	rd.init(131);
	unsigned int count = 0;
	unsigned int n;
	do
	{
		count++;
		n = rd.random();
	} while (n > 0xFFFF);
	printf("haha:  %d\n", n);
	printf("count: %d\n", count);
	return 0;
}