#include <stdio.h>

int main() {
  int i, k, size;

  scanf("%d", &size);

  for (i = 0; i < size; i++)
  {
    for (k = 0; k < i; k++)
    {
      printf(" ");
    }
    for (k = 0; k < (size - i) * 2 - 1; k++)
    {
      printf("*");
    }

    printf("\n");
  }
  for (i = 1; i < size; i++)
  {
    for (k = 0; k < size - i - 1; k++)
    {
      printf(" ");
    }
    for (k = 0; k < i * 2 + 1; k++)
    {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}
