#include <stdio.h>

int t[100000] = { 0 };	// �����Ҵ� �ϴ°� ����, C++������ vector
int main(){
	FILE* filePtr;
	freopen_s(&filePtr, "in1.txt", "r", stdin);

	int n = 0, k = 0, cnt = 0;
	int maxSum = -210000000, sum = 0;

	scanf_s("%d %d", &n, &k);

	// �ð� ���⵵ N?������ �𸣰ڰ� N^2���� ����
	for (int i = 0; i < n; i++) { 
		scanf_s( "%d", &t[i]);
		if (cnt < k) {
			sum += t[i];
			if (cnt == k - 1)	// ó�� k���� ���� maxSum�� �Ǿ���
				maxSum = sum;
		}
		else {
			sum = sum + t[i] - t[i - k];
			if (sum > maxSum)
				maxSum = sum;
		}
		cnt++;
	}

	// ���� for�� => �ð����⵵ ���� N^2
	//for(int i = 0; i<n-k+1; i++){
	//	sum = 0;
	//	for(int j = i; j<i+k; j++){
	//		sum += t[j];
	//	}
	//	if(sum > maxSum)
	//		maxSum = sum;
	//}

	fclose(filePtr);	// ���� �ȶ߰� �Ϸ��� filePtr == NULL �϶� return�Ѵٴ� �ڵ� freopen_s �Ʒ��� ������ ��
	printf("%d", maxSum);
	return 0;
}