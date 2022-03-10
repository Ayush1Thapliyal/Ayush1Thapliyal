#include<stdio.h>
main()
{
	int a[10],i,min;
	printf("entre 10 numbers");
	for(i=0;i<=0;++i)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=1;i<=10;++i)
	{
		if(min>a[i])
		min=a[i];
	}
	printf("min number is %d",min);
}
