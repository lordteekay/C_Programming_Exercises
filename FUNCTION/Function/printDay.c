#include <stdio.h>

/*
 * printDay:print what day of the week it is
 */
int main(){
  void printDay(int); //printDay prototype 
  int d;//Declared a variable to take the input
  printf("Enter a number of a day:");
  scanf("%i",&d);
  printDay(d);
  return 0;
}

void printDay(int a){
  if(a==1) printf("Sunday\n");
  else if(a==2) printf("Monday\n");
  else if(a==3) printf("Tuesday\n");
  else if(a==4) printf("Wednesday\n");
  else if(a==5) printf("Thursday\n");
  else if(a==6) printf("Friday\n");
  else if(a==7) printf("Saturday\n");
  else printf("Invalid day\n");
}
