#include<stdio.h>
main()
{
	int i = 100;
	int *ip1,*ip2; 
	ip1 = &i;
	ip2 = ++ip1;
	--ip1;
	printf("%u",ip1-ip2); //here 1000-1004 = 4294967295
	// 1004-1000 =1(int pointer 4B)
}

/*
1000    2000    3000
  i      ip1     ip2
 100    1000    1004(pointer arithmetic)
   	  1004=>1000		
 */
