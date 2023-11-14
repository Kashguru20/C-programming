#include<stdio.h>
main()
{
	int arr[5];
	int i;
	
	int n;
   printf("enter the elements for the array");
   scanf("%d",&n);
   
   for(i=0;i<n;i++)
   {
   		printf(" enter the elements in the array");
  	    scanf("%d",&arr[i]);
   }
    for(i=0;i<n;i++)
    {
    	
		printf(" the elements are %d\n",arr[i]);
	}
   
   
}
