#include<stdio.h>
main()
{
	abc(3);
}
void abc(int a)
{
	printf("%d\t",a);
	if(a)
	{
		abc(a-1);
//for every fun call the last line is skipped so, as it terminates the recur it will execute the last line
	}
	printf("%d\t",a);
}
