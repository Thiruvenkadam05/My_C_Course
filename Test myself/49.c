#include<stdio.h>

union un
{
short int a;
char ch[2];	
};
main(){
	union un u;
	u.ch[0]=2;
	u.ch[1]=3;
	printf("a : %d\n",u.a);
}
/*we are assigning the char variable (2 Bytes) and int (2B) 

so the union will have the size of the max datatype , 2B

representing in binary 

    ch[1]               ch[0]
0 0 0 0 0 0 1 1  <=  0 0 0 0 0 0 1 0  <=
*/
