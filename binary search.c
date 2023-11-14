nclude<stdio.h>
main()
{
	// binary search
 int arr[50];
 int n,i;
 int beg=0;
 int last=n-1;
 int mid;
 int loc=-1;
 int key=5;
 printf("enter the array ");
 n=7;
 for(i=0;i<n;i++)
 {
 	scanf("%d",&arr[i]);
 	 
 }

    while(beg<=last)
 {
 	mid=(beg=last)/2;
 	if(arr[mid]==key)
 	{
 		loc=mid;
 		break;
	 }
 	else if (arr[mid]>key)
 	{
 		last=mid-1;
	 }
 	else if(arr[mid]<key)
 	{
 		beg=mid+1;
	 }
 }
 if(loc!=-1)
 { 
 printf("element found at %d",loc+1);
 }
 else
 {
 	printf("element not found ");
 }
 
}
