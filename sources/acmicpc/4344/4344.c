#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]) {
  int classes, students, *scores, sum, ua, average, i;

  scanf("%d\n", &classes);

  while (classes--) {
    scanf("%d", &students);

    scores = (int *)malloc(sizeof(int) * students);

    i = students;

    sum = 0;
    ua = 0;

    while (i--) {
      scanf("%d", &scores[i]);

      sum += scores[i];
    }

    i = students;
    average = sum / students;

    while (i--) {
      if (scores[i] > average) {
        ua++;
      }
    }

    printf("%.3f%%\n", ((float)ua / (float)students) * 100);

    free(scores);
  }

  return 0;
}
