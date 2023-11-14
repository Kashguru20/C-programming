#include<stdio.h>
main()
{
	int a=10, b=0, c=2, d,e,f,g;
	d=(a==b) && (c>b);
	printf(" the (a==b) && (c>b) =%d\n",d); 
	e=(a==b) || (c>b); 
	printf(" the (a==b) || (c>b) =%d\n",e);
	f=!(a==b);
	printf(" the !(a==b) %d\n",f);
	g=(a&&b) || (c-2);
	printf(" the (a&&b) || (c-2) = %d\n",g);  
	
}  
		
