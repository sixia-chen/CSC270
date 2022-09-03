#include <stdio.h>

// read two integers and compute the average
int main(void){
  int integer1, integer2;
  printf("Please enter the two integers separated by comma: ");
  int err = scanf("%d,%d", &integer1, &integer2);
  if(err == EOF){
    printf{"Invalid input");
    return 1;
  }
  //printf("Please enter the second integer: ");
  //scanf("%d", &integer2);
  float avg = (integer1+integer2)/2.0;
  // not correct if you put 2 as a divisor
  // it will do integer computation and convert it to floating point
  printf("The average value is %f\n", avg);
  return 0;
}
  
