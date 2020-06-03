#include <stdio.h>

int main() {
  int a, b;

  scanf("%d %d", &a, &b);

  a = a - b;

  if (!a) {
    printf("==");
  }
  else if (a > 0) {
    printf(">");
  }
  else {
    printf("<");
  }

  return 0;
}
