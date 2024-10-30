//convert school name in abbreviated from?

#include<stdio.h>

  int main(){
  char fname[30], mname[30], lname[30];
  printf("Enter School name \n");
  scanf("%s %s %s", &fname, &mname, &lname);
  printf("Abbreviated Name: ");
  printf("%c. %c. %s\n", fname[0], mname[0], lname);
  
  }