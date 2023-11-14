#include<stdio.h>//array
main()
{
	// assign the values for the array 
   int n;
   printf("enter the elements for the array");
   scanf("%d",&n);
   
   // use of for loop for the display of the elements 
   int x[]={1,2,3,4,5};
   int i;
   for (i=0;i<n;i++)
   {
   	printf("%d\n",x[i]); // print the elements of the array
   }
   
}
