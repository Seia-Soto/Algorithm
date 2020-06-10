#include "stdio.h"

int selfnum(int num) {
  int sum = num;

  while (num > 0) {
    sum += num % 10;
    num /= 10;
  }

  return sum;
}

int main(int argc, char const *argv[]) {
  int i = 10000, k, dict[10000] = { 0 };

  while (i--) {
    k = selfnum(i);

    if (k < 10000) {
      dict[k] = 1;
    }
  }

  for (i = 0; i < 10000; i++) {
    k = dict[i];

    if (!k) {
      printf("%d\n", i);
    }
  }

  return 0;
}
