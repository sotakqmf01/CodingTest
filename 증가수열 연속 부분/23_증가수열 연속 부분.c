#include <stdio.h>

int main() {
	// else���� cnt�� 0���� �ʱ�ȭ�ϰ� printf�� res+1�� ����Ϸ��� ���� ���� 
	// prev�� ���� �Է� ���� �ִ뺸�� ũ�� �ؼ� ù �Է¿� cnt������ �� ��
	// (������ ���ϸ� ���� ���� �ִ� �κ��� ù �Էº��� ������ �� Ʋ��)
	// �ٵ� �׳� cnt�� 1�� �ʱ�ȭ�ϸ� �׷��� �Ű�� �ᵵ ��
	int n = 0, num = 0, prev = 0, cnt = 0;
	int res = 0;

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &num);
		if (num >= prev) {
			cnt++;
			// res ���� �ֽ�ȭ �ϴ� �κ��� else���� ������ 
			// ���� ���� �ִ� �κ��� ������ �Է±��� �� �� �ֽ�ȭ�� ���ؼ� Ʋ��
			if (cnt > res)
				res = cnt;
		}
		else
			cnt = 1;
		prev = num;
	}

	printf("%d", res);
	return 0;
}

//#include <iostream>
//using namespace std;
//
//int t[100000] = { 0 };
//int main(void) {
//	int n = 0;
//	int cnt = 0, max = 0;
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> t[i];
//
//		if (i == 0) {
//			cnt = 1;
//			max = cnt;
//		}
//		else if (t[i - 1] <= t[i]) {
//			cnt++;
//			if (cnt > max)
//				max = cnt;
//		}
//		else {
//			cnt = 1;
//		}
//	}
//
//	cout << max;
//	return 0;
//}