#include<stdio.h>
main()
{
	// inserting of an element into a specific position of an array 
	//or deleting  of an element of an array
	
	int arr[5]={9,3,6,1,8};
	int i,n=5;
	printf(" print the  elements of the array");
	
	int index=3;
	int value=3;
	
	for(i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
	}
		printf(" \nthe sorted array is");
	for(i=n;i>=index;i--)
	{
		arr[i+1]=arr[i];
	} 
	arr[index]=value;
	n++;
	for(i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
	}
	}
