#include <stdio.h>

int main() {
  int sum = 0, i, t;

  for (i = 0; i < 5; i++) {
    scanf("%d", &t);

    if (t < 40)
    {
      sum += 40;
    }
    else
    {
      sum += t;
    }
  }

  printf("%d\n", sum / 5);

  return 0;
}
