#include <stdio.h>

int main() {
  int i, k, size, ftab;

  scanf("%d", &size);

  ftab = size / 2 + (size % 2);

  for (k = 0; k < size; k++)
  {
    for (i = 0; i < ftab; i++)
    {
      printf("* ");
    }

    printf("\n");

    for (i = 0; i < ftab - (size % 2); i++)
    {
      printf(" *");
    }

    printf("\n");
  }

  return 0;
}
