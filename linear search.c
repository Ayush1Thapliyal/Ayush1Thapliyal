#include<stdio.h>
mian()
{
	int a[10],i,n,flag=0;
	printf("entre 10 number");
	for(i=0;i<10;++i)
	{
		scanf("%d",&a[i]);
	}
	printf("which number want to search");
	scanf("%d",&n);
	for(i=0;i<10;++i)
	{
		if(a[i]==n)
	
		flag=1;
		break;
	}
	if(flag==1)
	printf("number found");
	else
	printf("number not found");
}
