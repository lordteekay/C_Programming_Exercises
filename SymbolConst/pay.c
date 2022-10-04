#include <stdio.h>
#define MaxRegularHour 40
#define OverTime 1.5
/**
*main - entry point
*i used the symbolic constant for define directive  for the given exercise below
*Description:Calculate the regular pay,overtime pay,and gross pay.
*Return : 0 on success
*/
int main(void){
	//regular pay as regPay,overtimepay as ovtPay,grosspay as gP
	double regPay,ovtPay,gP;
	double hrsWork,rop;//hrswork as Hours work,rop as rate of pay
	printf("Enter the number of hours worked:");
	scanf("%lf",&hrsWork);
	printf("Enter the rate of pay per hour:");
	scanf("%lf",&rop);
	if(hrsWork<=MaxRegularHour){
		regPay=hrsWork*rop;
		ovtPay=0;
	}
	else{
		regPay=MaxRegularHour*rop;
		ovtPay=(hrsWork-MaxRegularHour)*OverTime*rop;
	}
	gP=regPay+ovtPay;
	printf("The regular pay is:$%.2lf\n",regPay);
	printf("The overtime pay is:$%.2lf\n",ovtPay);
	printf("The gross pay is:$%.2lf\n",gP);
}

	

