#include <stdio.h>

int main() {
	int a, b, c, r1, r2;

	scanf("%d %d %d", &a, &b, &c);

	r1 = (a + b) % c;
	r2 = (a*b) % c;

	printf("%d\n%d\n%d\n%d\n", r1, r1, r2, r2);

	return 0;
}
