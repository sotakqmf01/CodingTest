#include <iostream>
#include <math.h>
using namespace std;

int main(void) {
	int n = 0, a = 0, cnt = 0;
	long long result = 0;
	cin >> n;

	a = n;
	while (a / 10 > 0) {
		a = a / 10;
		cnt++;
		result += cnt * 9 * pow(10, cnt - 1);

	}

	result = result + (cnt + 1) * (n - pow(10, cnt) + 1);

	cout << result;

	return 0;
}

// ���� �ڵ�
//#include<stdio.h>
//int main() {
//	freopen("input.txt", "rt", stdin);
//  // sum : 1���� n���� �߿� ���� �ڿ����� ����
//  // res : ������ �� ����
//	int n, sum = 0, cnt = 1, digit = 9, res = 0;
//	scanf("%d", &n);
//	while (sum + digit < n) {
//		sum = sum + digit;
//		res = res + (cnt * digit);
//		cnt++;
//		digit = digit * 10;
//	}
//	res = res + ((n - sum) * cnt);
//	printf("%d\n", res);
//	return 0;
//}