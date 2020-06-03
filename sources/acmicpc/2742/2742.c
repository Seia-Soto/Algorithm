#include <stdio.h>

int main() {
  int k;

  fscanf(stdin, "%d", &k);

  while (k--) {
    fprintf(stdout, "%d\n", k + 1);
  }

  return 0;
}
