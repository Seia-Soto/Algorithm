#include "stdio.h"

int main(int argc, char const *argv[]) {
  int min = 0, max = 0, i, t;

  scanf("%d", &i);

  while (i--) {
    scanf("%d", &t);

    if (!min || min > t) {
      min = t;
    }
    if (!max || max < t) {
      max = t;
    }
  }

  printf("%d %d\n", min, max);
}
