#include<stdio.h>
int add(int); //declaration
main()
{
	int a=5;
		printf("the sum of the numbers is  : %d",add(a)); // function calling 
}
// function defination 
int add(int x)
{
	//calling o function 
	if(x==0)
	return 0;
	
	else
	return x+add(x-1);
}

