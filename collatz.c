#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {

  // Open the filename given as the first command line argument for reading
  FILE* fp = fopen(argv[1], "r");
  if (!fp) {
    perror("fopen failed");
    return EXIT_FAILURE;
  }

  char buf[256];
  char* string = fgets(buf, 256, fp);
  int number = atoi(string); // The starting number for the Collatz sequence
  /* ... */
  while(number > 1){
    printf("%d\n", number);
    if(number%2 == 0){
      number = number/2;
    }
    else{
      number = (number*3)+1;
    }
  }

  // Printing in C.
  // %d is the format specifier for integer numbers.
  // \n is the newline character
  printf( "%d\n", number );

  return EXIT_SUCCESS;
}
