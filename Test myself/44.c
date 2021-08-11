#include<stdio.h>
main()
{
	int a = 35,b=15,c=25,d,e;
	d = a>c>b;
	e = c-b>a<=d;
	printf("d : %d\ne : %d\n",d,e);
}
