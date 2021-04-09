#include <stdio.h>

int main(int argc, char *argv[]) {
  char *nume = "World";

  if (argc > 1)
    nume = argv[1];
  printf("Hello, %s!\n", nume);

  return 0;
}
