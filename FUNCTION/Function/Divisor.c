#include <stdio.h>

void main(){
  int sumDivisor(int); /*sumDivisor prototype*/
  int divisor,sum;
  printf("Enter an integer:");
  scanf("%i",&divisor);
  while(divisor!=0){
    sum = sumDivisor(divisor);
    printf("The sum of the %i divisors is:%i\n",divisor,sum);
    if(sum<divisor) printf("%i is Deficient\n\n",divisor);
    else if(sum==divisor) printf("%i is Perfect\n\n",divisor);
    else printf("%i is Abundant\n\n",divisor);
    printf("Enter 0 to terminate\n");
    printf("Enter an integer:");
    scanf("%i",&divisor);
  }
}

int sumDivisor(int n){
  int sumDiv=1;
  for(int h=2;h<=n/2;h++){
    if(n%h==0) sumDiv+=h;
  }
  return sumDiv;
}
