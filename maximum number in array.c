#include<stdio.h>
main()
{
	int a[10],i,max,p=1;
	printf("entre 10 number");
	for(i=0;i<10;++i)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<10;++i)
	{
	if(max<a[i])	
	max=a[i];
	p=i+1;
}
printf("max number%d",max);
}
