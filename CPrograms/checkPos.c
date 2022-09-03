//read a number from user
//print the number out as long as it is positive
#include <stdio.h>

int main(void){
  int inputV;
  do{
    printf("please enter a number: ");
    scanf("%d", &inputV);
    if(inputV > 0)
      printf("The number you entered is %d\n", inputV);
  }while(inputV > 0);
  
  return 0;
}
  
  
