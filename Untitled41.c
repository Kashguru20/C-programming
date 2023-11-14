#include<stdio.h>
main()
{// ladder for if else if 
	int a,b,c;
	printf("enter the values of a,b,c \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&& a>c)
	{
		printf("a is largest");
	}
	else if(b>a && b>c)
	{
		printf("b is the largest");
	}
	else
	{
		printf("c is the largest");
	}
}
