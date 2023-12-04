#include <stdio.h>

int main() {
	int n = 0;
	int line = 0;
	scanf_s("%d", &n);

	line = 2 * n - 1;
	// 1번과 2번으로는 마름모 만들기 편할 듯? 위아래만 바꾸면 될 것 같음.
	// 1. 모래시계 오른쪽 빈칸을 공백으로 채운 것
	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < line; j++) {
			if (j<i || j>line - 1 - i)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < line; j++) {
			if (j < line / 2 - i || j>line / 2 + i)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}*/
	//-------------------------------------------------------------------
	
	// 2. 모래시계 오른쪽 빈칸에 아무것도 없는 것
	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < line-i; j++) {
			if (j<i)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= line / 2 + i; j++) {
			if (j < line / 2 - i)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}*/
	//-------------------------------------------------------------------

	// 3. 모래시계 오른쪽 빈칸에 아무것도 없는 것 + 첫 for문을 나누지 않음
	for (int i = 0; i < line; i++) {
		if (i < (line / 2)) {
			for (int j = 0; j < line - i; j++) {
				if (j < i)
					printf(" ");
				else
					printf("*");
			}
		}
		else {
			for (int j = 0; j <= i; j++) {
				if (j < line - i - 1)
					printf(" ");
				else
					printf("*");
			}
		}
		putchar('\n');
	}
	return 0;
}
