main(){
	int A[5] = {5,8,9,6,10} ;
	int *p, *q;
	
	p = &A[0]; // or p = A or p = &A 
	q = &A[3];
	
    printf("%d ",++*p);
    printf(" %d ",*p++);
    printf(" %d ",*p);
    
    printf(" %d ",(*q)++);
    printf(" %d ",*q);
    

}
