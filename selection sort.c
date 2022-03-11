#include<stdio.h>
main()
{
	int a[5],i,j,mini,t,p;
	printf("enter 5 numbers");
	
	for(i=0;i<5;++i)
	{
	  scanf("%d",&a[i]);	
		}
	
		for(i=0;i<4;++i)
{

		mini =a[i];
		p=j;
		for(j=i+1;j<5;++j)
		{
			if(mini>a[j])
		{
		mini=a[j];
		p=j;	
		}
	}
		t=a[i];
		a[i]=a[p];
		a[p]=t;
}
printf("output is \n");
for(i=0;i<5;++i)
{
	printf("%d\n",a[i]);

}
}
