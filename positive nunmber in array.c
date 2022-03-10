#include<stdio.h>
main()
{
	int a[10],i,s=0;
	printf("entre 10 numbers");
	for(i=0;i<0;++i)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;++i)
	{
		printf("%d\n",a[i]);
		if(a[i]>0)
		s=s+a[i];
	}
	printf("sum of positive number%d",s);
}
