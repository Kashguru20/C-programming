#include<stdio.h>
#include<conio.h>
int sum1(int v, int u);
main()
{
	int a,b,c;
	a=10, b=20;
	
	sum1(a,b);
	printf(" \nprint outside the function in main %d",c);
}
int sum1(int x, int y)
{
	int z;
	z=x+y;
	printf("output inside the function=%d",z);
	
	return z;
	return 1;
}
