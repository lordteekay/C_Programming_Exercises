#include <stdio.h>
/**
*main - entry point
*to calculate the net pay from a person's gross salary minus the deduction
*and the rate of tax
*Return: 0
*/
int main(void){
	double gross,deduction,tax,netPay,netGross;
	printf("Enter your gross salary:$");
	scanf("%lf",&gross);
	printf("Enter the deduction:$");
	scanf("%lf",&deduction);
	netGross = gross - deduction;
	tax = (((double)25/100)*netGross);	
	netPay = netGross-tax;
	printf("The gross salary:$%10.2lf\n",gross);
	printf("The tax deducted:$%10.2lf\n",tax);
	printf("The netpay:$%10.2lf\n",netPay);
	printf("The percentage of the gross paid in tax:25%%\n");
	return 0;
}
