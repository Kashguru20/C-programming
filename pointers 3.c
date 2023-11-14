#include<stdio.h>
main()
{
	int i,n,fact=1;
	int *ptr, *ptr1;
	
	ptr=&n;
	ptr1=&fact;
	
	printf("enter the number for factorial");
	scanf("%d",ptr);
	
	for(i=1,i<*ptr;i++)
	{
		*pfact=*pfact*i;
	}
	printf(" the factorial of the given number is:%d",*pfact);
}
