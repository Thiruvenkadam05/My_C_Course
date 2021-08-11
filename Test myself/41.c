#include<stdio.h>
main()
{
	int a,b;
	a=3+2,b=a,12;
	//12 aa utrum 
	printf("a : %d b : %d\n",a,b);
	
	a=(3+2,b=a,12);
	//a=(5,b=0(here 5 as we mentioned bef),12)
	//a=12 bracket irunda kadaisi value than eduthukum
	printf("a : %d b : %d",a,b);
}
