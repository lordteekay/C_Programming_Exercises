#include <stdio.h>
/**
*main - entry point
*Description: To calculate the sum of two lengths m and cm with given condition if cm greater than 100
*1 should be added to the m. where m is meter and cm is centimeter
*Return: 0 on success
*/
int main(void){
	double m1,cm1,m2,cm2,sum_CM,sum_M,total;
	printf("Enter values for m and cm:");
	scanf("%lf %lf",&m1,&cm1);
	printf("Enter values for m and cm:");
	scanf("%lf %lf",&m2,&cm2);
	sum_CM=cm1+cm2;
	sum_M=m1+m2;
	if(sum_CM>100){
		sum_CM=sum_CM-100;
		sum_M=sum_M+1;
	}
	printf("sum is:$%.2lf $%.2lf\n",sum_M,sum_CM);
	return 0;
}
