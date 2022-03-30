//WAP to input a matrix and find sum 
#include<stdio.h>
main()
{
	int a[3][3],i,j,s;
	printf("enter a matrix");
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
		
		scanf("%d",&a[i][j]);
		}
	}
	printf("output in \n");
	for(i=0;i<3;++i)
	{
		s=0;
		for(j=0;j<3;++j)
		{
			printf("%d\t",a[i][j]);
			s=s+a[i][j];
		}
		printf("%d\n",s);
	}
}
