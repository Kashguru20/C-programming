#include<stdio.h>
main()
{
   int arr[3][3];
   int arr1[3][3];
   int arr2[3][3];
   int i,j,n=3;

 printf("enter the array (arr)\n");

for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&arr[i][j]);
	}
}

 printf("the array to be shown is (arr)\n");
  for(i=0;i<n;i++)
  {
  	for(j=0;j<n;j++)
  	{
  		printf("%d",arr[i][j]);
	  }
	  printf("\n");
  }
  
   printf("enter the array (arr1)\n");

for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&arr1[i][j]);
	}
}

 printf("the array to be shown is (arr1)\n");
  for(i=0;i<n;i++)
  {
  	for(j=0;j<n;j++)
  	{
  		printf("%d",arr1[i][j]);
	  }
	  printf("\n");
  }
 
 printf(" the sum of the arrays (arr) and (arr1) = array (arr2)");
 for(i=0;i<n;i++);
 {
 	for(j=0;j<n;j++)
 	{
 		arr2[i][j]=arr[i][j]+arr1[i][j];
	 }
 }
 
 for(i=0;i<n;i++);
 {
 	for(j=0;j<n;j++)
 	{
 	 printf("%d",arr2[i][j]);
	 }
	  printf("\n");
 }

 
}
  






