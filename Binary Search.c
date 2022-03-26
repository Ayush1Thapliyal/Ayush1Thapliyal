#include<stdio.h>
 main()
{
	int a[20],i,n,l,u,mid,flag=0;
	printf("enter 20 number into asscending order");
	for (i=0;i<5;++i)
	{
		scanf("%d",&a[i]);
	}
	printf("which no want to search");
	scanf("%d",&n);
	l=0;
	u=5;
	while(l<=u)
	{
		if(a[l]==n || a[u]==n)
	
	{
		flag=1;
		break;
	}
	else
	{
		mid=(l+u)/2;
		if(a[mid]==n)
		
	{
		flag=1;
		break;
	}
	else if (a[mid]>n)
	u=mid-1;
	else if (a[mid]<n)
	l=mid+1;
	}
	}
	if (flag==1)
	printf("number found");
	else
	printf("number not found");
	
	}
