// write a programm to find the sum of all the elements of the array using pointers 

#include<stdio.h>
main()
{
	int arr[]={1,2,3,4,5};
	int n=5,i;
	
	int *ptr=arr;
printf(" the sum of the elements of the array is: ");
for(i=0;i<n;i++)
{
printf("\t%d",*(ptr+i));
}
	
	
}
