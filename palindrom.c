#include<stdio.h>
main()
{
	int n,r,s=0;
	printf("entre any number");
	scanf("%d",&n);
	while(n>0)
{
	r=n%10;
	s=s*10+r;
	n=n/10;
}
if(n==s)
	printf("number is palindrom %d",s);
	else
	printf("number is not palindrom %d",s);
}
