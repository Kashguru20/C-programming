// dynamic memory allocation
// Malloc function 
//(^_-)

#include<stdio.h>
main()
{
	int *p,n,i;
	
	printf("enter the number of intrger to be used");
	scanf("%d",&n);
	
	p=(int*)malloc(n*(sizeof(int)));
	if(p=NULL)
	{
		printf("no memory available");
		exit(1);
	}
	
	else
	{
		printf("memory allocation is succesfull\n");
		printf(" enter the values\n");
		
		for(i=0;i<n;i++)
		{
			scanf("%d",p+i);
		}
		for(i=0;i<n;i++)
		{
			printf("%d\n",*(p+i));
		}
	}
	
	
}
