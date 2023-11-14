#include<stdio.h>
main()
{
int arr[5];
int i,n;
printf("Enter the Range=");
scanf("%d",&n);
printf("\nEnter the elements in array");

for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}


for(i=0;i<n;i++)
{
printf("\nThe Elements %d",arr[i]);
}
 int smallest;
 int largest;
 smallest=arr[0];
 largest=arr[0];
 
 for(i=0;i<n;i++)
 {
 	if(arr[i]<smallest)
 	{
 		smallest=arr[i];
 	
	 }
 
 }
 printf("\nthe smallest value is %d",smallest);

 for(i=0;i<n;i++)
 {
 	if(arr[i]>largest)
 	{
 		largest=arr[i];
 	
	 }
 
 }
  printf("\nthe largest value is %d",largest);
}
