#include <stdio.h>

int main(){
  int ch,num=0;
  printf("Type data including number and 'ENTER'\n");
  while((ch=getchar())!='\n'){
    if(ch>='0'&&ch<='9') num=num*10+ch-'0';
  }
  printf("\n\nThe number is %i\n",num);
}
