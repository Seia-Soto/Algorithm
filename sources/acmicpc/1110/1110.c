#include <stdio.h>

int main() {
  int cycle = 0, norm, chain, chain10x, chain1x;

  scanf("%d", &norm);

  chain = norm;

  do
  {
    cycle++;

    if (chain < 10)
    {
      chain = chain * 10 + chain;
    }
    else
    {
      chain10x = chain / 10;
      chain1x = chain % 10;

      chain = chain1x * 10 + (chain10x + chain1x) % 10;
    }
  }
  while (norm != chain);

  printf("%d\n", cycle);

  return 0;
}
