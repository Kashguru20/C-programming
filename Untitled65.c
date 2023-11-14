#include<stdio.h>
extern int n=9;
int y=8;

main()
{
	int w;
	static int d;
	register int x=7,m;
	auto int k;
	
	k=y*y;
	m=x*x;
	printf("the multiplied value for k inside the main is :%d",k);
	printf("\nthe value of m insidde the main is :%d",m);
	mystatic();
	mystatic();
	mystatic();
	mystatic();
	mystatic();
	printf("\nthe value of the extern variable is:%d",n);
	
}
mystatic()
{
	static int j=5;
	printf("\nthe value of j inside the function is  is:%d",j);

	printf("\nthe value of the extern variable is:%d",n);
	
n++;
}


