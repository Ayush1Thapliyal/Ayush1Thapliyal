#include<stdio.h>
main()
{
	int a[3][3],i,j;
	printf("enter value into a matrix");
	for (i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
