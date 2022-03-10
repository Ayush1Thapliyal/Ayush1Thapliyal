#include<stdio.h>
main()
{
	int n,r,s=0;
	printf("entre any number");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("sum of digits %d",s);
}
