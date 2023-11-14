#include<stdio.h>
main()
{
	int arr[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf(" enter the elements in the array");
  	    scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf(" the elements are %d\n",arr[i]);
	}
}
