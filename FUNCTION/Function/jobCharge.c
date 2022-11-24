#include <stdio.h>
#define ChargePrice 100
#define MinJobCost 150

void main(){
  double calcJobCost(double,double);//Prototype of the calcJobCost
  printf("The the job charge is %lf\n",calcJobCost(1.5,87.50));
}
double calcJobCost(double hours,double parts){
  double jobCharge;
  jobCharge=hours*ChargePrice + parts;
  if(jobCharge<MinJobCost) return MinJobCost;
  return jobCharge;
}
