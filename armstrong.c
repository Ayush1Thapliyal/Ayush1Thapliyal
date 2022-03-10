#include<stdio.h>
main()
{
	int n,r,s=0;
	printf("entre any number");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		s=s+power(r,3);
		n=n/10;
	} 
	
	if(a==n)
	printf("number is armstrong");
	else
	printf("number is not armstorng");

}
