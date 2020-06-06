#include "stdio.h"

int getIndexOf(int number, int index) {
	int i;

	for (i = 0; i < index; i++) {
		number /= 10;
	}

	return number % 10;
}
int getLengthOf(int number) {
  int i = 0;

  while (number) {
    number /= 10;
    i++;
  }

  return i;
}

int main(int argc, char const *argv[]) {
  int stat[10] = { 0 }, i, t, prod = 1;

  for (i = 0; i < 3; i++) {
    scanf("%d", &t);

    prod *= t;
  }

  for (i = 0; i < getLengthOf(prod); i++) {
    stat[getIndexOf(prod, i)]++;
  }

  for (i = 0; i < 10; i++) {
    printf("%d\n", stat[i]);
  }

  return 0;
}
