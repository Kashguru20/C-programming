#include<stdio.h>
main()
{
	int a=5, b=5, c=10;
	printf("%d",a==b);
	printf("\n%d",b==c);
	printf("\n%d",c==a);
	printf("\n%d",a<=b);
	printf("\n%d",b<=c);
	printf("\n%d",c<=a);
	printf("\n%d",a!=b);
	printf("\n%d is equal to b %d = %d",a,b,a<=b);
}
				
