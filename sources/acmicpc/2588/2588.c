#include <stdio.h>

int getIndexOf(int number, int index) {
	int i;

	for (i = 0; i < index; i++) {
		number /= 10;
	}

	return number % 10;
}
int getOriginalIndexOf(int number, int index) {
	int i;

	for (i = 0; i < index; i++) {
		number *= 10;
	}

	return number;
}

int main() {
	int a, b, i, l, k, t;
	int r[4] = { 0 };

	scanf("%d %d", &a, &b);

	for (i = 0; i < 3; i++) {
		t = getIndexOf(b, i);

		for (k = 0; k < 3; k++) {
			r[i] += getOriginalIndexOf(getIndexOf(a, k), k) * t;
		}
	}

	r[3] = a * b;

	for (i = 0, l = sizeof(r) / sizeof(int); i < l; i++) {
		printf("%d\n", r[i]);
	}

	return 0;
}
