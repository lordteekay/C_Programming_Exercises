#include <stdio.h>

void main(){
  int isUpperCase(char ch);/*prototype*/
  printf("Enter a character:");
  char c = getchar();
  printf("%i\n",isUpperCase(c));
}

int isUpperCase(char ch){
  return ch>='A' && ch<='Z';
}
