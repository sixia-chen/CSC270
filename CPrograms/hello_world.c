#include <stdio.h>

int main(int argc, char **argv) {
  if (argc <= 1) {
    puts("Who are you ?");
    return 1;
  }
  
  printf("Hello,");
  for (int i = 1; i < argc; i += 1) {
    printf(" %s", argv[i]);
  }
      printf("\n");
}

