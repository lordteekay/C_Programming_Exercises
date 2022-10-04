#include <stdio.h>
/**
*main-Function to calculate the compound interest of an amount deposited in a bank
*Description:The following code calculate the year the initial amount deposited ,interest rate and the  year to meet the target price. i.e the code calculates the compound interest and the year to meet specific amount after depositing the first money.
*@initDeposit-The amount to deposit in the bank
*@roi-The bank interest rate
*@target-The targetted price to meet
*@newDeposit-Amount calculated after each year
*return:nothing
*/ 
void main(){
	double initDeposit,roi,target,interest,newDeposit;
	int year=0;
	printf("Enter the initial Deposit?");
	scanf("%lf",&initDeposit);
	printf("Rate of interest?");
	scanf("%lf",&roi);
	printf("Enter the target deposit?");
	scanf("%lf",&target);
	newDeposit=initDeposit;
	printf("Year   Deposit   intrest\n\n");
	do{
		initDeposit=newDeposit;
		interest=((double)roi/100)*initDeposit;
		year++;
		newDeposit=initDeposit+interest;
		printf("%3d %10.2lf %8.2lf\n",year,initDeposit,interest);  
	}while(newDeposit<target);
	printf("Amount exceeded $2000 after %d year(s)\n",year);
}
