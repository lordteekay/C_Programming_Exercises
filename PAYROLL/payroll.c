#include <stdio.h>
#include <string.h>
#define MaxRegularHours 40
#define OvertimeFactor 1.5
/**
*main - Entry point
*Description - We are to calculate the Regular pay,overtime pay,net pay,count the number of employees,the total wage bill(total net pay for all employees),and print which employer earned the highest and how much earned.
*Return:Nothing
*/
void main(){
	FILE* in = fopen("paydata.txt","r");
	FILE* out = fopen("payroll.txt","w");
	char firstName[20],lastName[20],name[50];
	double hours,ovtPay,regPay,netPay,rateOfPay;
	fprintf(out,"Name             Hours  Rate  Regular Overtime    Net\n");
	fscanf(in,"%s",firstName);
	while(strcmp(firstName,"END")!=0){
		fscanf(in,"%s %lf %lf",lastName,&hours,&rateOfPay);
		if(hours<=MaxRegularHours){
			regPay=hours*rateOfPay;
			ovtPay=0;
		}
		else{
			regPay=MaxRegularHours*rateOfPay; 
			ovtPay=(hours-MaxRegularHours)*rateOfPay*OvertimeFactor;
		}
		netPay=regPay+ovtPay;
		//Make a name out of firstName and lastName
		strcpy(name,firstName); strcat(name," "); strcat(name,lastName);
		fprintf(out,"%-15s %5.1lf %6.2lf",name,hours,rateOfPay);
		fprintf(out,"%9.2lf %9.2lf %7.2lf\n",regPay,ovtPay,netPay);
		fscanf(in,"%s",firstName);
	}
	fclose(in);
	fclose(out);
}
