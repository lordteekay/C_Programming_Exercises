#include <stdio.h>
/*
 * least:Find the least number between two numbers
 */
void main(){
  double least(double,double);//The function prototype
  double c,d;//Declariing a varable c and d
  printf("Enter the value of the two numbers:");
  scanf("%lf %lf",&c,&d);
  printf("The least number between %.2lf and %.2lf is:%.2lf\n",c,d,least(c,d));
}

double least(double a,double b){
  if(a<b) return a;
  return b;
}
