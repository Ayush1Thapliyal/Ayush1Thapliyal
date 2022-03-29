//WAP a program to input 10 no. into an array and count the occurance of any given no.s?

#include<stdio.h>
main()
{
	int a[10],i,c=0,n;
	printf("enter 10 numbers ");
	for(i=0;i<10;++i)
	{
		scanf("%d",&a[i]);
	}
	{
		printf("which number you want to search");
		scanf("%d",&n);
		for(i=0;i<10;++i);
	}
	if(a[i]==n)
	++c;
	if(c>0)
	
		printf("%d number found");
		else
		printf("%d number not found");
	
}
