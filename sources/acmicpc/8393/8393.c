#include <stdio.h>

int main() {
  int a, t = 0, i;

  scanf("%d", &a);

  for (i = 1; i <= a; i++)
  {
    t += i;
  }

  printf("%d", t);

  return 0;
}
