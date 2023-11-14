#include<stdio.h>
main()
{
	int num;
	int a=1;
	int factorial=1;
	printf("enter the number: ");
	scanf("%d",&num);
	while(a<=num)
	{
		factorial*=a;
		a++;
	}
	 printf(" the factorial of the given number is %d",factorial);	
	
}
