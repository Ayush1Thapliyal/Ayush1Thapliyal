#include<stdio.h>
main()
{
	int a[10],i,c=0,n;
	printf("entre 10 numbers");
	for(i=0;i<10;++i)
	{
		scanf("%d",&a[i]);
		
	}
	printf("which number you want to count");
	scanf("%d",&n);
	{
		if(a[i]==n)
		++c;
	}
	if(c>0)
	printf("%d comes %d times ");
	else
	printf("%d number not found");
}
