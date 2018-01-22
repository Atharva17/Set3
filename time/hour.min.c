#include<stdio.h>
int main()
{
	int time,hr=0,min=0;
	scanf("%d",&time);
	hr=time/60;
	min=time%60;
	printf("%dhour:%dmins",hr,min);
	return 0;
}
