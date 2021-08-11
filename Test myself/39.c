#include<stdio.h>
main()
{
	int x = 3, y = 3;
	while(--x && --y)
	{
		printf("%d %d\n",x,y);
	}
	printf("%d %d\n",x,y);
}
