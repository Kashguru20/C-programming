#include<stdio.h>
main()
{
	 int x=10,y=9;
	  void *ptr,*ptr1;
	  ptr=&x;
	  printf("the value at generic pointer is:%d",*(int*)ptr);
	  
	  
	  char c='A';
	  ptr1=&c;
	  
	  printf("\nthe value at generic pointer is:%d",*(char*)ptr1);
 } 
