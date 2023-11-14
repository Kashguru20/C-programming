// pointers in c
#include<stdio.h>
main()
{
	int var=20;
	int *ptr1;

    ptr1=&var;
  printf("value of var is: %d",var);
  printf("\nthe address of var is %d",&var);
  printf("\nthe address for ptr1 is %u",&ptr1);
  
  printf("\naddress of var using ptr1 %u",ptr1);
  printf("\nthe value of var located at ptr1 is %d",*ptr1);
}

