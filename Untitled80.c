// 2D array 
#include<stdio.h>
main()
{
   int arr[2][2]={{1,2},{3,4}};
   int arr1[2][2]={2,3,4,5};
   int arr2[2][2]={{1},{3,4}};
   int arr3[2][2]={0};
   int arr4[][0]={1,2,3};
   int i,j;
   
   printf("show the elements of the array arr\n");
  
  for(i=0;i<2;i++)
  {
  	for(j=0;j<2;j++)
  	{
  		printf("%d",arr[i][j]);
	  }
	  printf("\n");
  }
   
   printf("show the elements of the array ar1)n");
  for(i=0;i<2;i++)
  {
  	for(j=0;j<2;j++)
  	{
  		printf("%d",arr1[i][j]);
	  }
	  printf("\n");
  }
  
   printf("show the elements of the array arr2\n");
  for(i=0;i<2;i++)
  {
  	for(j=0;j<2;j++)
  	{
  		printf("%d",arr2[i][j]);
	  }
	  printf("\n");
  }
  
   printf("show the elements of the array arr3\n");
  for(i=0;i<2;i++)
  {
  	for(j=0;j<2;j++)
  	{
  		printf("%d",arr3[i][j]);
	  }
	  printf("\n");
  }
  
   printf("show the elements of the array arr4\n");
  for(i=0;i<2;i++)
  {
  	for(j=0;j<2;j++)
  	{
  		printf("%d",arr4[i][j]);
	  }
	  printf("\n");
  }
  
}


