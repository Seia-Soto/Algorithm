#include <stdio.h>

int main() {
  int a, i, k, t;

  fscanf(stdin, "%d", &a);

  for (i = 0; i < a; i++)
  {
    for (k = 1; k < a - i; k++)
    {
      fprintf(stdout, " ");
    }
    for (k = 0; k <= i; k++)
    {
      fprintf(stdout, "*");
    }

    fprintf(stdout, "\n");
  }

  return 0;
}
