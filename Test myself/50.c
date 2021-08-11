main()
{
	char *str = "geeks";
	printf("\t%c\n",*((str--+2)+1)-3); //post so str +2+1= str+3 gee_k_    k-3 = h
	printf("\t%c\n",*(--str+3)-32); // points to first e
	printf("\t%c\n",*(++str+2)-4); // e-4 = a
}

/*
1) str 1000
2) str 998(if 32 is sub from lower case alphabet it will be a upper case)
3) 998 -> 999 ->1001 
*/
