#include<stdio.h>
main()
{
	int arr[5]={1,2,3,4,5};
	int i,key,loc=1;
	int n=5;//no. of elements
	printf(" enter the elements in the array");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	key=3;//value to be searched
	
	for(i=0;i<n;i++)
	{
		if (arr[i]==key);		
{
		loc=0;
//	break;
	printf("%d",i+1);}
	}
	
	if(loc!=-1)
	{
		printf("\n the element  found %d",loc+1);
	}
	else
	{
		printf("element not found");
	}
}

