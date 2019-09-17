#include "library.h"

int main() {
  ssize_t input = -10;
  printf("signum of (%ld) = %ld\n", input, signum(input));
  return 0;
}
