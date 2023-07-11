#include<stdio.h>
main()
{
	int unit,bill,total_bill,sc;
	printf("enter your bill =");
	scanf("%d",&unit);
	if(unit<=50)
	{
		bill=unit*0.50;
	}
	else if(unit<=150)
	{
		bill=(unit-50)*0.75+25;
	}
	else if(unit<=250)
	{
		bill=(unit-150)*1.20+75;
	}
	else
	{
		bill=(unit-250)*1.50+100;
	}
	sc=bill*20/100;
	printf("sercharge =%d\n",sc);
	total_bill=sc+bill;
	printf("you pay bill=%d",total_bill);
}
