#include <stdio.h>
#include <string.h>
int main(){
  int dayFunction(char,int);
  char mth[20];
  int yr;
  printf("Enter the month and year:");
  fgets(mth,out);
  scanf("%i",&yr);
  printf("The month %s has %i in the year %i\n",mth,dayFunction(mth,yr),yr);
}

int dayFunction(char m[*],int y){
  if((strcmp(m,"december")==0)||(strcmp(m,"December"))) return 31;
}
