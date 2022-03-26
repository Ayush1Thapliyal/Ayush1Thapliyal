#include<stdio.h>
main()
{
	int a[5], b[5],i,j,t;
	printf("enter 5 age and salaries");
	for(i=0;i<5;++i)
	{
	
		scanf("%d%d",&a[i],b[i]);
	}	
	for(i=0;i<5;++i)
	{
		for(j=j+1;j<5;++j)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
				
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
			
		}
	}
	printf("age \t salary \n");
	for (i=0;i<5;++i)
	{
		printf("%d\t%d\n",a[i],b[i]);
	}
}
