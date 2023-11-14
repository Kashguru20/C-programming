#include<stdio.h>
extern int x=9;
void print1()
{
	print1("value is %d",x);
	x=x+10;
}
