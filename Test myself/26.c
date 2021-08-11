#include<stdio.h>

main()

{

	int a,x;
	
	a=5,x=a++;
	
	printf("\n%d %d",x,a);
	
	a=5,x=++a;
	
	printf("\n%d %d",x, a);
	
	
	a=5,x=a--;
	
	printf("\n%d %d",x, a);
	
	a=5,x=--a;
	
	printf("\n%d %d",x, a);

}

