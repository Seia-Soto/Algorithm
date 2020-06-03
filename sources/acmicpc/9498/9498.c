#include <stdio.h>

int main() {
  int i;

  scanf("%d", &i);

  i = i / 10;

  switch (i)
  {
  case 10:
  case 9:
    printf("A");
    break;
  case 8:
    printf("B");
    break;
  case 7:
    printf("C");
    break;
  case 6:
    printf("D");
    break;
  default:
    printf("F");
  }

  return 0;
}
