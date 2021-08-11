#include<stdio.h>

fun(int);
main()
{
    int a = 2;
    fun(a++);
}
fun(int x)
{
	
	printf("x value : %d\n",x++);
}
