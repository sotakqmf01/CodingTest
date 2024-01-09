#include <stdio.h>

int t[100000] = { 0 };	// 동적할당 하는게 좋음, C++에서는 vector
int main(){
	FILE* filePtr;
	freopen_s(&filePtr, "in1.txt", "r", stdin);

	int n = 0, k = 0, cnt = 0;
	int maxSum = -210000000, sum = 0;

	scanf_s("%d %d", &n, &k);

	// 시간 복잡도 N?인지는 모르겠고 N^2보단 좋음
	for (int i = 0; i < n; i++) { 
		scanf_s( "%d", &t[i]);
		if (cnt < k) {
			sum += t[i];
			if (cnt == k - 1)	// 처음 k개의 합이 maxSum이 되야함
				maxSum = sum;
		}
		else {
			sum = sum + t[i] - t[i - k];
			if (sum > maxSum)
				maxSum = sum;
		}
		cnt++;
	}

	// 이중 for문 => 시간복잡도 거의 N^2
	//for(int i = 0; i<n-k+1; i++){
	//	sum = 0;
	//	for(int j = i; j<i+k; j++){
	//		sum += t[j];
	//	}
	//	if(sum > maxSum)
	//		maxSum = sum;
	//}

	fclose(filePtr);	// 밑줄 안뜨게 하려면 filePtr == NULL 일때 return한다는 코드 freopen_s 아래에 적으면 됨
	printf("%d", maxSum);
	return 0;
}