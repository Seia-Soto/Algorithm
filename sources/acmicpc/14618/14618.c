#include <stdio.h>

int main() {
  int x, y, r;

  scanf("%d %d", &x, &y);

  if (y >= 0) {
    r += 1 + (x < 0);
  }
  else {
    r += 3 + (x >= 0);
  }

  printf("%d", r);

  return 0;
}
