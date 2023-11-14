#include<stdio.h>
main()
{
	int a=2,b=4;//binary of 2 is 00000010,binary of 4 is 00000100
	printf("a&b=%d",a&b);
	printf("\n bitwise or a|b=%d",a|b); 
	
	
	printf("\n left shift a<<1=%d",a<<1);
	printf("\n left shift a<<3=%d",a<<2);
	printf("\n right shift b>>2=%d",b>>2);
	printf("\n right shift b>>4=%d",b>>4);
	printf("\n complement of a<<1=%d",a<<1);
}
