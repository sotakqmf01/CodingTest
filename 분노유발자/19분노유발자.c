#include <stdio.h>

int height[100] = { 0 };
int main(void) {
	int n = 0;
	int cnt = 0, a = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &height[i]);
	}

	// ���� § �ڵ�
	for (int i = 0; i < n - 1; i++) {
		a = 0;
		for (int j = i + 1; j < n; j++) {
			if (height[i] <= height[j]) {
				a = 1;
				break;
			}
		}
		if (a == 0)
			cnt++;
	}

	// ���� ���� �ڵ�
	//int max = height[n-1];
	//for (int i = n - 2; i >= 0; i--) {
	//	if (height[i] > max) {
	//		max = height[i];
	//		cnt++;
	//	}
	//}

	printf("%d", cnt);
	return 0;
}