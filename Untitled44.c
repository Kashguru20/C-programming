#include<stdio.h>
main()
{
	// continue or break or go to.
	int i;
	for(i=2;i<=6;i++)
	{
	
		if(i%2==1)
		{
			goto abc;
		}
			abc:
				printf("change the value");
				printf("\n%d",i);
	}
	 
	
}
