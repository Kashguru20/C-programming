#include<stdio.h>
main()
// switch statement 
{
	int g;
	int a=10,b=20,c=30;
	printf("enter your choice of charecter\n");
	scanf("%d",&g);
	switch(g)
	{
		case 1:
			printf("your choice is addtion");
			c=a+b;
			printf("addtion is %d",c);
		break:
		case 2:
			printf("\nyour choice is subtraction");
			c=a-b;
			printf("subtraction is %d",c);
		break:
		
		default:
		printf("your choice is not present");		
		
	}
	
	
}
