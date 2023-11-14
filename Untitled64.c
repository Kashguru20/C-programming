#include<stdio.h>
extern int a=10;
fun1()
{
    printf(" \nvalue of global a inisde fun1 is %d",a);
    a++;
}
fun2()
{
	static int a=5;
	printf(" \nvalue of a inisde fun2 is %d",a);
	a++;
}
main()
{
	fun1();
	fun1();
	fun1();
	fun2();
	fun2();
	fun2();
}


