#include <stdio.h>
long double main(){
  double power(double,int),num,pow;
  printf("Enter the value of the value and raise to the power number:");
  scanf("%lf %lf",&num,&pow);
  printf("%.2lf raise to the power of %.1lf is:%.2lf\n",num,pow,power(num,pow));
}

double power(double x,int y){
  int sum=1;
  if(y==0) sum=1;
  else{
    for(int h=1;h<=y;h++){
      sum=sum*x;
    }
  }
  return sum;
}
