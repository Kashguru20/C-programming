#include<stdio.h>
main()
{
	int arr[7]={33,65,44,2,67,1,8};
	int  hold,i,j,n=7;
	//n is the number of elements  
	for(i=0;i<n-1;i++)//loop to control passes 
	{
		for(j=0;j<n-i-1;j++)//comparing the elements 
		{
			if(arr[j]>arr[j+1])
			{
				hold=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=hold;
			}
		}
	}
   for(i=0;i<n-1;i++)
   {
   	printf("\n%d",arr[i]);
   }
}



