#include "stdio.h"

int main(int argc, char const *argv[]) {
  int cases, combo = 0, score = 0, breaker = 1;
  char last;

  scanf("%d\n", &cases);

  while (cases--) {
    while (breaker) {
      scanf("%c", &last);

      if (last == '\n') {
        breaker = 0;
      }
      if (last == 'O') {
        combo++;
      } else {
        combo = 0;
      }

      score += combo;
    }

    printf("%d\n", score);

    combo = 0;
    score = 0;
    breaker = 1;
  }

  return 0;
}
