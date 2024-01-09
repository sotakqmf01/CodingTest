#include <iostream>
using namespace std;

int main(void) {
	int n = 0;

	cin >> n;
	int* num = (int*)calloc(n+1, sizeof(int));

	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j = j + i) {
			num[j]++;
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << num[i] << " ";
	}

	free(num);

	return 0;
}