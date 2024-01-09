#include <iostream>
using namespace std;

int t[100000] = { 0 };
int main(void) {
	int n = 0;
	int cnt = 0, max = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> t[i];

		if (i == 0) {
			cnt = 1;
			max = cnt;
		}
		else if (t[i - 1] <= t[i]) {
			cnt++;
			if (cnt > max)
				max = cnt;
		}
		else {
			cnt = 1;
		}
	}

	cout << max;
	return 0;
}