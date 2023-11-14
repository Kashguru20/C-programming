#include<stdio.h>
main()
{
	int a=5, b, c; 
	printf(" the value of a before unary operator is %d",a);
	b=--a;
	printf("\n the value of a after unary operator is %d",a);
	printf("\n the value of b after unary operator is %d",b);
	
	b=--a;
	 printf("\n the value of a after unary operator is %d",a);
	 printf("\n the value of b after unary operator is %d",b);
	 
	 b=a++;
	 printf("\n the value of a after unary operator is %d",a);
	 printf("\n the value of b after unary operator is %d",b);
	 
	 c=a++ + b;
	 printf("\n the value of c after unary operator is %d",c);


}
