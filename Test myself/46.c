#include<stdio.h>
main()
{
	char sport[] = "Nathamuni";
	int x=1,y;
	y= x++ + ++x;
	//x=1 ->2 + [++(2)=3] =4
	printf("%c",sport[++y]);
}
