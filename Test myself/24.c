//print 1 to 10 numbers sequentally without using any loops


main()
{
	
	int i =1;
	line:
	if(i<=100)
	{
		printf("%d\n",i);
		i++;
		goto line;
	}
}

/*
main()
{
	int i =1;
	printnum(i);
}

int printnum(int n)
{
	if(n<=100)
	{
		printf("%d \n",n);
		printnum(n+1);
	}
}
*/


