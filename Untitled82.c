// 2D array 
#include<stdio.h>
main()
{
   int arr[3][3]={{1,2},{3,4},{5,6}};
   int arr1[3][3]={2,3,4,5,6,7};
   int arr2[2][2];
   int i,j,n=3;
   
   printf("show the elements of the array(arr)\n");
  
  for(i=0;i<3;i++)
  {
  	for(j=0;j<3;j++)
  	{
  		printf("%d",arr[i][j]);
	  }
	  printf("\n");
  }
   
   printf("show the elements of the array (arr1)\n");
  for(i=0;i<3;i++)
  {
  	for(j=0;j<3;j++)
  	{
  		printf("%d",arr1[i][j]);
	  }
	  printf("\n");
  }
  
  
  printf("enter the array (arr2)\n");

for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&arr2[i][j]);
	}
}

 printf("the array to be shown is (arr2)\n");
  for(i=0;i<n;i++)
  {
  	for(j=0;j<n;j++)
  	{
  		printf("%d",arr2[i][j]);
	  }
	  printf("\n");
  }
  
}
