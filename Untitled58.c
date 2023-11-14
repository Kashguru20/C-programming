#include<stdio.h>
int fact1(int); //declaration
main()
{
	int a=5;
	printf("factorial is : %d",fact1(a)); // function calling 
}
// function defination 
int fact1(int x)
{
	//calling o function 
	if(x==0||x==1)
	return 1;
	
	else
	return x*fact1(x-1);
}
