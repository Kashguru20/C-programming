#include<stdio.h>
main()
{
	int a[]={12,3,4,4,5};
	int *ptr=a;
	int n=5;// no of elements in an array 
	int i;// for loop
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(ptr+1));
	}
}
