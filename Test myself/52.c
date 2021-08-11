#include<stdio.h>
void fun();
main()
{
	fun();
	fun();
	fun();
	
}
void fun()
{
	static int a= 5;//since we define it as static it will be there till the program ends & NOT THE fun
	printf(" a: %d ",a+=2);
	
}
