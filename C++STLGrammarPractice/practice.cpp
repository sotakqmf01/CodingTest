#include <iostream>
#include <vector>
#include <algorithm>	// => min_element(), sort(), reverse()
#include <cmath>		// => sqrt(), floor()
#include <functional>	// => greater<>()
#include <string>		// => string, to_string(), stoll()
#include <string_view>	// => string_view

using namespace std;

// �� �ڵ�� �߿��� �κи� ©�� �� �Ŷ� ����� 100%�� �ƴ� 


// �������� 1�� �Ǵ� ���� ���� �ڿ���
int solution(int n) {
	if (n & 1) return 2;
	else for (int i = 3; i < n; i += 2) if (n % i == 1) return i;
}


//------------------------------------------------------------------------------------
// arr ���� ���� ���� ���� ������ �迭�� ���� 1
vector<int> solution(vector<int> arr) {
	int min = 0;
	for (int i = 1; i < arr.size(); i++) {
		if (arr[i] < arr[min])
			min = i;
	}
	arr.erase(arr.begin() + min);

	return arr;
}
// arr ���� ���� ���� ���� ������ �迭�� ���� 2
vector<int> solution2(vector<int> arr) {
	arr.erase(min_element(arr.begin(), arr.end()));
	return arr;
}
// => �����̳�.begin()�̳� min_element()�� ��ȯ ���� �ּ�(iterator)�̴�


//--------------------------------------------------------------------------------------
// sqrt()�� �Ⱦ��� ���� ������ ã�� �� 1
long long solution(long long n) {
	long long answer = 0;

	long long i;
	for (i = 1; i * i <= n; i++);

	if ((i - 1) * (i - 1) == n)
	{
		answer = i - 1;
	}
	else {
		answer = -1;
	}
	return answer;
}
// sqrt()�� �Ⱦ��� ���� ������ ã�� �� 2
void solution2(int n) {
	if (sqrt(n) == floor(sqrt(n))) {}

	// 3
	if ((int)sqrt(n) * (int)sqrt(n) == n) {}
}


//------------------------------------------------------------------------------------------
// �������� ����
void solution(long long n) {
	// vector, string�� ���� �ʿ��� ��
	// map�� �ڵ� ����(�����Ϸ��� sort�ؾ��ϳ�?)

	// �������� 1
	string str = to_string(n);
	sort(�����̳�.begin(), �����̳�.end(), greater<�ڷ���>());	// less<�ڷ���>() => ��������
	n = stoll(str);

	// �������� 2
	sort(�����̳�.rbegin(), �����̳�.rend());		// �������� �������� �����ϴϱ� ���������δ� ���������� ��

	// �������� 3
	sort(�����̳�.begin(), �����̳�.end());		// �⺻ = ��������
	reverse(�����̳�.begin(), �����̳�.end());	// ���� �� ����� ������ ���� => ������������ ���� ���� �����ϴϱ� ��������
}



// �κ� ���ڿ� ���� �Ǵ� ����
// string_view�� c++17���� ���°Ŷ� ������Ʈ �Ӽ�-> ���� �Ӽ�-> �Ϲ�-> C++��� ǥ�� ���� �ؾ���
// string_view�� ��� ���ڿ��� [����]�ϴ� ��ü
// ���ڿ��� ���� �����Ϳ� ũ�⸸ ������ ����
void solution() {
	string str = "hello world";

	sort(str.begin(), str.end());

	str.substr(2, 5);					// ���� "llo w"
	string_view str2(&str[2], 5);		// ���� "llo w"
	string_view str3 = str2;			// ���� "Hello world"
	string_view str4 = "Unreal";		// ���� "Unreal"

	// �� ������ C++20���� ���� ��
	string_view str5(str.begin(), str.end());

}


//------------------------------------------------------------------------------------------
// �����̳� ���� ����
void solution() {
	// remove�� ������ ��ҵ��� �����ϴ� ���� �ƴ϶� ������ ����� ��ġ�� �������� ���� ��Ҹ� ���
	// => �����̳��� ũ�Ⱑ �����ǰ� �����̳��� �ڿ� ������ ����� ����ŭ �������� ������ ���Ե�
	remove(�����̳�.begin(), �����̳�.end(), ��);

	// erase�� ������ ��Ҹ� �����ϰ� �ڿ� �ִ� ��ҵ��� �մ�ܿ´�
	// => �����̳��� ũ�Ⱑ �۾���, �ڿ� �ִ� ��ҵ��� ��ܿ��� �Ϳ��� ������尡 �߻�
	�����̳�.erase(key);
	�����̳�.erase(iterator);
	�����̳�.erase(�����̳�.begin(), �����̳�.end());
}