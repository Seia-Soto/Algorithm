#include <stdio.h>

int main() {
  int burger = 0, drink = 0, i, t;

  for (i = 0; i < 3; i++)
  {
    scanf("%d", &t);

    if (!burger || t < burger)
    {
      burger = t;
    }
  }
  for (i = 0; i < 2; i++)
  {
    scanf("%d", &t);

    if (!drink || t < drink)
    {
      drink = t;
    }
  }

  printf("%d", burger + drink - 50);

  return 0;
}
