#include<stdio.h>
main()
{
	int a=5, b=6, c=7, d;
	d=(++a /c*++b) + c;
	printf("\n the value of d after a unary operator is %d",d);
}
