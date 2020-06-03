#include <stdio.h>

int main() {
  int i, k;

  fscanf(stdin, "%d", &k);

  for (i = 0; i < k; i++) {
    fprintf(stdout, "%d\n", i + 1);
  }

  return 0;
}
