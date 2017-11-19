#include <stdio.h>
int main()
{
int sum=0,a,b;
scanf("%d%d",&a,&b);
for(i=0;i<10;i++)
{
sum=a+b;
printf("%d",sum);
a=b;
b=sum;
}
return 0;
}
