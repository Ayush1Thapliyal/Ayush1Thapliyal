#include<stdio.h>
main()
{
	int n,r,flag=0;
	printf("entre any number");
	scanf("%d",&n);
	while(n>0)
	
	r=n%10;
	n=r==0;
	if(r==0)
	flag=1;
	if(flag==1)

	printf("duck number");
	else
	printf("not a duck number");
}
