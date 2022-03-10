#include<stdio.h>
main()
{
	int a[10],i,c1=0,c2=0;
	printf("entre 10 numbers");
	for(i=0;i<=0;++i)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=10;++i)
	{
		printf("%d\n",a[i]);
		if(a[i]%2==0)
		++c1;
		else
		++c2;
	}
	printf("total even no%d",c1);
	printf("tatal odd no%d",c2);
}
