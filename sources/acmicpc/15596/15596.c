long long sum(int *a, int n) {
  long long sum = 0;

  while (n--) {
    sum += a[n];
  }

  return sum;
}
