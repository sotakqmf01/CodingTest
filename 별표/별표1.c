#include <stdio.h>

int main() {
	int n = 0;
	int line = 0;
	scanf_s("%d", &n);

	line = 2 * n - 1;
	// 1���� 2�����δ� ������ ����� ���� ��? ���Ʒ��� �ٲٸ� �� �� ����.
	// 1. �𷡽ð� ������ ��ĭ�� �������� ä�� ��
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
	
	// 2. �𷡽ð� ������ ��ĭ�� �ƹ��͵� ���� ��
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

	// 3. �𷡽ð� ������ ��ĭ�� �ƹ��͵� ���� �� + ù for���� ������ ����
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
