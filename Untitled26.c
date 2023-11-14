#include<stdio.h>
main()
{
	int x,y;
	x=3;
	y=5;
	printf("x and y are %d %d",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\nx and y are %d %d",x,y);
	
}
