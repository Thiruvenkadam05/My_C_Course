// to make a infinite loop without using actual loop & goto

repete()
{
	printf("infinite condition\n");
	repete();
}
main()
{
	repete();
}

