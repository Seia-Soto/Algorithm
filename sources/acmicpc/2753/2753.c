#include <stdio.h>

int main() {
  int i;

  scanf("%d", &i);

  printf("%d", !(i % 4) && ((i % 100) || !(i % 400)));

  return 0;
}
