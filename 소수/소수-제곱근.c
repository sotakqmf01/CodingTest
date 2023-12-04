#include <stdio.h>
#include <math.h>

int main(void) {
	int n = 0, flag = 0;
	int prime = 0;

	scanf_s("%d", &n);

	for (int i = 2; i <= n; i++) {
		flag = 0;
		// for(int j = 2; j*j <= i; j++) 이렇게 하면 굳이 sqrt()함수 안쓰고도 가능
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			prime++;
	}

	printf("%d", prime);
	return 0;
}