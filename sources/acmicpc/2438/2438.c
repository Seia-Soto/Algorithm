#include <stdio.h>

int main() {
  int i, k, t;

  fscanf(stdin, "%d", &k);

  for (i = 0; i < k; i++)
  {
    for (t = 0; t <= i; t++)
    {
      fprintf(stdout, "*");
    }
    fprintf(stdout, "\n");
  }

  return 0;
}
