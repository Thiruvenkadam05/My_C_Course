void main(){
	int a=4 ,b=5;
	b = a++ + a--;
	a = ++b + b--;
//tepically the post inc opr will act on next stmt
// preinc will change val spontaniously in all occerences 
	printf("%d %d",a ,b);
}
