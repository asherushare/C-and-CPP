#include<stdio.h>
#include<string.h>

int main(){

  char stringlen[100];
  printf("Enter string here: ");
  gets(stringlen);

  const char *ptr= stringlen;

  int length=0;
  while(*ptr!='\0'){
    length++;
    ptr++;
  }

  printf("The lenth of string is: %d",length);
  return 0;
}