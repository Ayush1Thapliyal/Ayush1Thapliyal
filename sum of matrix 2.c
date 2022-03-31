#include<stdio.h>
main()
{
	int a[3][3],i,j,s=0;
	printf("enter a matrix");
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("output is \n");
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
			s=0;
	}

	for(j=0;j<3;++j)
	{
		s=s+a[j][i];
	}
	printf("%d\t",s);
}
