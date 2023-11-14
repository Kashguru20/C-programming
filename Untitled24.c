#include<stdio.h>
main()
{
	int days,years,weeks;
	days = 1329;
    years=days/365;
    days=days&365;
    weeks=days/52;
    printf("%d",years);
    printf("/n%d",days);
    pritnf("/n%d",weeks);
    
	
}
