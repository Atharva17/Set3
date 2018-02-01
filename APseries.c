#include <stdio.h>
int main()
{
int sum=0,A,D;
float N;
scanf("%f%d%d",&N,&A,&D);
sum=(N/2)*(2*A+(N-1)*D);
printf("%d\n",sum);
return 0;
}
