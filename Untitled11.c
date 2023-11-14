#include<stdio.h>
main()
{
	int age;
	age=20;
    float height;
    height=5.11;
    
	printf("enter the age and the height:");
	
	scanf("%d %f",&age,&height);
	
	printf("age is %d and height is %f",age,height);
	
	char str[]="deepak";
	
	scanf("%s",&str);
	
	printf("%s",str);
	
}
