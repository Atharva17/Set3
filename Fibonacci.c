#include <stdio.h>
int main()
{
int sum=0,a,b,i;
scanf("%d%d",&a,&b);
for(i=0;i<10;i++)
{
sum=a+b;
printf("%d\n",sum);
a=b;
b=sum;
}
return 0;
}
