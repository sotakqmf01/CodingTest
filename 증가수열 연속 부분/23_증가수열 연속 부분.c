#include <stdio.h>

int main() {
	// else에서 cnt를 0으로 초기화하고 printf에 res+1을 출력하려고 했을 때는 
	// prev의 값을 입력 값의 최대보다 크게 해서 첫 입력에 cnt증가를 안 함
	// (저렇게 안하면 증가 수열 최대 부분이 첫 입력부터 시작할 때 틀림)
	// 근데 그냥 cnt를 1로 초기화하면 그런거 신경안 써도 됨
	int n = 0, num = 0, prev = 0, cnt = 0;
	int res = 0;

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &num);
		if (num >= prev) {
			cnt++;
			// res 값을 최신화 하는 부분을 else에다 넣으면 
			// 증가 수열 최대 부분이 마지막 입력까지 일 때 최신화를 안해서 틀림
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