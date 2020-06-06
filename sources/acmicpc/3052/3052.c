#include "stdio.h"

int main(int argc, char const *argv[]) {
  int i, k, nums[10], locs[10], alreadyRegistered;

  for (i = 0; i < 10; i++) {
    locs[i] = -1;
  }

  for (i = 0; i < 10; i++) {
    scanf("%d", &nums[i]);

    nums[i] %= 42;
  }
  for (i = 0; i < 10; i++) {
    alreadyRegistered = 0;

    for (k = 0; k < 10; k++) {
      if (nums[i] == locs[k]) {
        alreadyRegistered++;

        break;
      }
    }

    if (!alreadyRegistered) {
      locs[i] = nums[i];
    }
  }

  nums[0] = 0;

  for (i = 0; i < 10; i++) {
    if (locs[i] >= 0) {
      nums[0]++;
    }
  }

  printf("%d\n", nums[0]);

  return 0;
}
