#include <stdio.h>

int main() {
  int p = 0, m = 0, i, t;

  for (i = 0; i < 3; i++)
  {
    scanf("%d", &t);

    if (!m || m < t)
    {
      m = t;

      if (!p || p < m)
      {
        t = p;
        p = m;
        m = t;
      }
    }
  }

  printf("%d\n", m);

  return 0;
}
