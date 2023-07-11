#include<stdio.h>
main()
{
	int p,n,r=0,s;
	printf("enter a number=");
	scanf("%d",&n);
	p=n;
	while(p>0)
	{
		s=p%10;
		r=(r*10)+s;
		p=p/10;
	}
	if(n==r)
	{
		printf("%d is palindrom ",n);
	}
	else
	{
		printf("%d is not pallindrom",n);
	}
}
