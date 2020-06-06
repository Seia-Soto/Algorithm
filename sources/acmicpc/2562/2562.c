#include "stdio.h"

int main(int argc, char const *argv[]) {
  int i, t, max = 0, idx;

  for (i = 0; i < 9; i++) {
    scanf("%d", &t);

    if (!max || max < t) {
      max = t;
      idx = i;
    }
  }

  printf("%d\n%d\n", max, idx + 1);

  return 0;
}
