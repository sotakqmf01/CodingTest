#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
	vector<vector<int>> answer;

	int rows = arr1.size();
	int columns = arr1[0].size();

	answer.resize(rows);

	//for (int i = 0; i < rows; i++) {
	//	answer[i] = vector<int>();
	//}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			answer[i].push_back(arr1[i][j] + arr2[i][j]);
		}
	}

	//for (int i = 0; i < rows; i++) {
	//	for (int j = 0; j < columns; j++) {
	//		answer[i][j] = (arr1[i][j] + arr2[i][j]);
	//	}
	//}

	return answer;
}

int main() {
	vector<vector<int>> v1 = { 
		{1, 2}, 
		{3, 4}
	};
	vector<vector<int>> v2 = { 
		{3, 4},
		{5, 6}
	};

	vector<vector<int>> v3 = solution(v1, v2);

	return 0;
}

//int t[100000] = { 0 };
//
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
//
//	return 0;
//}

//string str = "hello world";

//string_view str2(&str[2], 5);		// 'llo w'


//int n = 10;
//while (n--) {
//	cout << 10 - n << endl;
//}


	//vector<int> v = { 1, 2, 3, 4, 5 };

//// intro sort라고 C++ STL에서 제공하는 퀵/힙/삽입 정렬을 합쳐놓은 레전드 정렬 알고리즘
	//sort(v.begin(), v.end());
