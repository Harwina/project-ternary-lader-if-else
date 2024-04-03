#include<stdio.h>
main()
{
	int unit; 
	float electricity_bill,surcharge,total_bill;
	
	printf("enter electricity units= ");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		electricity_bill=unit*0.50;
	}
	else
	{
		if(unit<=150)
		{
			electricity_bill=50*0.50+(unit-50)*0.75;
		}
		else
		{
			if(unit<=250)
			{
				electricity_bill=50*0.50+100*0.75+(unit-150)*1.20;
			}
			else
			{
			
				electricity_bill=50*0.50+100*0.75+100*1.20+(unit-250)*1.50;
				
			}
		}
	}
	
	
	
	surcharge = 0.20 * electricity_bill;
	total_bill=electricity_bill+surcharge;
	
	printf("electricity bill=Rs%.2f\n",total_bill);
	
}