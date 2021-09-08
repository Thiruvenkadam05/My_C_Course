#include<stdio.h>
main()
{
	int a,b;
	a=3+2,b=a,12;

	printf("a : %d b : %d\n",a,b);
	
	a=(3+2,b=a,12);
	printf("a : %d b : %d",a,b);
}
