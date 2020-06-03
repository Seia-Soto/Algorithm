#include <stdio.h>

int main() {
  int a, b, t, k;

  fscanf(stdin, "%d", &t);

  k = t;

  while (t--) {
    fscanf(stdin, "%d %d", &a, &b);
    fprintf(stdout, "Case #%d: %d\n", k - t, a + b);
  }

  return 0;
}
