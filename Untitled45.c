#include<stdio.h>
main()
{
	int i;
	i=5;
	if(i<7)
	{
		goto abc;
	}
	if(i>6)
	{
		goto xyz;
	}
	abc:
		printf("change the value");
		
	xyz:
	printf("\naur kya hall hai");	
}
