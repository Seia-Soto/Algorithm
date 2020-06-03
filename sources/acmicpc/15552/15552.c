#include <stdio.h>

int main() {
  int a, b, i;

  fscanf(stdin, "%d", &i);

  while (i--) {
    fscanf(stdin, "%d %d", &a, &b);
    fprintf(stdout, "%d\n", a + b);
  }

  return 0;
}
