#include<stdio.h>/*create an array  arr of six values ask the values and print the sum of the 
elements of the array*/
main()
{
	int arr[5];
	int i;
	int sum =0;
	
	
	printf(" enter the elements \n");
	for(i=0;i<5;i++)
	{
		
        scanf("%d",&arr[i]);
   
	}
		printf("\n  show the elements  is %d");
	for(i=0;i<5;i++)
	{
		printf(" \n%d",arr[i]);
		
		sum=sum+arr[i];
		
	}
   printf("\n the sum is %d",sum);
   
   for(i=0;i<5;i++)
   	{
  	if(arr[i]%2==0)
   {
   	printf("\nthe even elements are %d",arr[i]);
   }
    else
   {
   	printf("\nthe odd elements are %d",arr[i]);
   }
}
}

