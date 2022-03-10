#include<stdio.h>
main()
{
	int i=1,s=0,n;
	while(i<=10)
	{
		printf("entre any number");
		scanf("%d",&n);
		if(n>0)
		s=s+n;
		else
		continue;
		++i;
	}
	printf("sum=%d",s);
}
