#include<stdio.h>
int main()
{
int a[100],t,n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("Sorted elments with their index\n",);
for(i=0;i<n;i++)
{
	printf("%d %d\n",a[i],i);
}
return 0;
}
