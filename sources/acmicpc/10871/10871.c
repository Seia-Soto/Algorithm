#include <stdio.h>

int main() {
  int size, norm, c;

  fscanf(stdin, "%d %d", &size, &norm);

  while (size--) {
    fscanf(stdin, "%d", &c);

    if (c < norm) {
      fprintf(stdout, "%d ", c);
    }
  }

  return 0;
}
