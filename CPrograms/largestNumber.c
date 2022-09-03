#include <stdio.h>

int main(void){
 unsigned int number, largest=0;
  for(int count = 1; count <= 10; count++){
    printf("Please enter a nonnegative integer: ");
    int err = scanf("%u", &number);
    if (err != EOF) return 1;
    if(largest < number)
      largest = number;
  }
  printf("The largest number is %u\n", largest);
  return 0;
}
