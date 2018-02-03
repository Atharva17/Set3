#include<stdio.h>
int main()
{
	int hr1,min1,hr2,min2,hr,min;
	scanf("%d%d",&hr1,&min1);
	scanf("%d%d",&hr2,&min2);
	hr=(hr2-hr1)*60;
	min=min2-min1;
	min+=hr;
	printf("%d:%d\n",min/60,min%60);
	return 0;
}
