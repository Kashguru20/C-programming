#include<stdio.h>
main()
{
   int arr[2][2];
   int i,j,n=2;
printf("enter the array\n");

for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&arr[i][j]);
	}
}

 printf("the array to be shown is:\n");
  for(i=0;i<2;i++)
  {
  	for(j=0;j<2;j++)
  	{
  		printf("%d",arr[i][j]);
	  }
	  printf("\n");
  }
}
