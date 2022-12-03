#include <stdio.h>

void main(){
  int getInt();/*The function prototype*/
  getInt();
}
int getInt(){
  FILE*in=fopen("nextInteger.txt","r");
  int ch,num;
  while((ch=getc(in))!=EOF){
    if(ch>='0' && ch<='9'){
      num=ch-'0';
      printf("The next integer is %i\n",num);
    }
  }
  fclose(in);
}
