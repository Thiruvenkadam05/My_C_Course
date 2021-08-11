void f(int*p,int*q)
{
	p=q;
	*p=2;
}
int i=0,j=1;
main()
{
	f(&i,&j);
	printf("%d %d ",i,j);
	
}
/*
address   1000  2000  3000  4000
			i	 j		p	 q
		
values		0    1	 ~1000~  2000

p=q					  2000

*p=2  - *p(content of p)address of q ;

-> q=2;

*/
