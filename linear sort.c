#include<stdio.h>
main()
{
	int a[5],i,j,t;
	printf("enter any number");
	for(i=0;i<5;++i)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<4;++i)
	{
		for(j=i;j<5;++j){
			if(a[i]>a[j])
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
		}
	}
	
	printf("output is \n");
	for (i=0;i<5;++i)
	{
		printf("%d\n",a[i]);
	}
}

