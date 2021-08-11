#include<stdio.h>
main()
{
	int arr[5]={10,20,30,40,50};
	int *ptr;
	ptr=arr;
	printf("%d\n",*++ptr+3);// pointer is at 20
	printf("%d\n",*(ptr--+2)+5); // ptr at 20 [post dec]
	printf("%d\n",*(ptr+3)-10); //ptr is at 10
}
