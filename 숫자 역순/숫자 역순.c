#include <stdio.h>
#include <math.h>

int reverse(int x) {
	int cnt = 0, tmp = x;
	int reverseX = 0;
	while (tmp > 0) {
		cnt++;
		tmp /= 10;
	}

	for (int i = cnt - 1; i >= 0; i--) {
		reverseX += (x % 10) * (int)pow(10, i);
		x /= 10;
	}
	return reverseX;
}

int reverse1(int x) {
	int reverseX = 0;
	while (x > 0) {
		reverseX = reverseX * 10 + x % 10;
		x /= 10;
	}
	return reverseX;
}

int main(void) {
	int a = 5923;

	printf("%d\n", a);
	printf("%d\n", reverse(a));
	printf("%d\n", reverse1(a));

	return 0;
}