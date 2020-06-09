#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]) {
  int size, i, t, max = 0, *nums;
  float sum = 0;

  scanf("%d", &size);

  nums = (int *)malloc(sizeof(int) * size);
  i = size;

  while (i--) {
    scanf("%d", &t);

    nums[i] = t;

    if (!max || max < t) {
      max = t;
    }
  }

  i = size;

  while (i--) {
    sum += (float)nums[i] / (float)max * 100;
  }

  printf("%f\n", sum / (float)size);

  free(nums);

  return 0;
}
