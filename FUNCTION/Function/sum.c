#include <stdio.h>

int main(){
  int sumFunction(int),num;
  printf("Enter an integer value:");
  scanf("%i",&num);
  printf("The sum of the integer %i is:%i\n",num,sumFunction(num));
}

int sumFunction(int n){
  int sum=0;
  for(int i=0;i<=n;i++){
    sum=sum+i;
  }
  return sum;
}
