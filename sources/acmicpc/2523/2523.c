#include <stdio.h>

int main() {
  int i, k, size;

  scanf("%d", &size);

  for (i = 0; i < size; i++)
  {
    for (k = 0; k <= i; k++)
    {
      printf("*");
    }

    printf("\n");
  }

  while (size--)
  {
    i = size;

    while (i--)
    {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}
