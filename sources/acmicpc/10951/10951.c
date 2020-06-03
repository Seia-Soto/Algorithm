#include <stdio.h>

int main() {
  int a, b;

  while (fscanf(stdin, "%d %d", &a, &b) != EOF)
  {
    fprintf(stdout, "%d\n", a + b);
  }

  return 0;
}
