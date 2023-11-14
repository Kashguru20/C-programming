#include<stdio.h>
main()
{
	// nested loop
	
	int i,j,k;
	// create a table
	k=5;
	
	for(i=0;i<k;i++)
	{
		for(j=1;j<10;j++)
		{
			printf("\n%d*%d=%d",i,j,i*j);
			printf("\n");
		}
	}
}
