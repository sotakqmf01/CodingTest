#include <stdio.h>

int height[100] = { 0 };
int main(void) {
	int n = 0;
	int cnt = 0, a = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &height[i]);
	}

	// 내가 짠 코드
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

	// 코테 강의 코드
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

// C++로 다시 구현해본거
//#include <iostream>
//using namespace std;
//
////int height[100] = { 0 };
//int main(void) {
//	int n = 0;
//	int tall = 0, cnt = 0;;
//
//	cin >> n;
//
//	int* height = (int*)calloc(n, sizeof(int));
//
//	for (int i = 0; i < n; i++) {
//		cin >> height[i];
//	}
//
//	// 입력 받는 n의 값이 100을 넘으면 height배열의 index를 넘어가서 경고 표시
//	// => 동적 할당하면 없어짐 => 대신 C6011 경고
//	// => height가 nullptr일 때의 경우를 처리해주면 됨
//	if (height != nullptr) {
//		tall = height[n - 1];
//	}
//
//	for (int i = n - 2; i >= 0; i--) {
//		if (height[i] > tall) {
//			cnt++;
//			tall = height[i];
//		}
//	}
//
//	cout << cnt;
//
//	free(height);
//	return 0;
//}