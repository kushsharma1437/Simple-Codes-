#include<stdio.h>
int main()
{
	int i,n,r,j;
	printf("Enter the Decimal number which you want to convert into Binary\n");
	scanf("%d",&n);
	int a[n];
	i=0;
	while(n>0)
	{
		r=n%2;
		a[i]=r;
		n=n/2;
		i++;
	}
	for(j=i-1 ; j>=0 ; j--)
	{
		printf("%d",a[j]);
	}		
}
