#include <iostream>
#include <vector>
#include <algorithm>	// => min_element(), sort(), reverse()
#include <cmath>		// => sqrt(), floor()
#include <functional>	// => greater<>()
#include <string>		// => string, to_string(), stoll()
#include <string_view>	// => string_view

using namespace std;

// 각 코드는 중요한 부분만 짤라서 온 거라 정답률 100%는 아님 


// 나머지가 1이 되는 가장 작은 자연수
int solution(int n) {
	if (n & 1) return 2;
	else for (int i = 3; i < n; i += 2) if (n % i == 1) return i;
}


//------------------------------------------------------------------------------------
// arr 에서 가장 작은 수를 제거한 배열을 리턴 1
vector<int> solution(vector<int> arr) {
	int min = 0;
	for (int i = 1; i < arr.size(); i++) {
		if (arr[i] < arr[min])
			min = i;
	}
	arr.erase(arr.begin() + min);

	return arr;
}
// arr 에서 가장 작은 수를 제거한 배열을 리턴 2
vector<int> solution2(vector<int> arr) {
	arr.erase(min_element(arr.begin(), arr.end()));
	return arr;
}
// => 컨테이너.begin()이나 min_element()는 반환 값이 주소(iterator)이다


//--------------------------------------------------------------------------------------
// sqrt()를 안쓰고 정수 제곱근 찾는 법 1
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
// sqrt()를 안쓰고 정수 제곱근 찾는 법 2
void solution2(int n) {
	if (sqrt(n) == floor(sqrt(n))) {}

	// 3
	if ((int)sqrt(n) * (int)sqrt(n) == n) {}
}


//------------------------------------------------------------------------------------------
// 내림차순 정렬
void solution(long long n) {
	// vector, string에 정렬 필요할 때
	// map은 자동 정렬(역순하려면 sort해야하나?)

	// 내림차순 1
	string str = to_string(n);
	sort(컨테이너.begin(), 컨테이너.end(), greater<자료형>());	// less<자료형>() => 오름차순
	n = stoll(str);

	// 내림차순 2
	sort(컨테이너.rbegin(), 컨테이너.rend());		// 역순으로 오름차순 정렬하니까 정방향으로는 내림차순이 됨

	// 내림차순 3
	sort(컨테이너.begin(), 컨테이너.end());		// 기본 = 오름차순
	reverse(컨테이너.begin(), 컨테이너.end());	// 범위 내 요소의 순서를 반전 => 오름차순으로 만든 다음 반전하니까 내림차순
}



// 부분 문자열 참조 또는 생성
// string_view는 c++17부터 들어온거라 프로젝트 속성-> 구성 속성-> 일반-> C++언어 표준 변경 해야함
// string_view는 상수 문자열을 [참조]하는 객체
// 문자열에 대한 포인터와 크기만 가지고 있음
void solution() {
	string str = "hello world";

	sort(str.begin(), str.end());

	str.substr(2, 5);					// 생성 "llo w"
	string_view str2(&str[2], 5);		// 참조 "llo w"
	string_view str3 = str2;			// 참조 "Hello world"
	string_view str4 = "Unreal";		// 참조 "Unreal"

	// 이 문법은 C++20부터 들어온 것
	string_view str5(str.begin(), str.end());

}


//------------------------------------------------------------------------------------------
// 컨테이너 원소 제거
void solution() {
	// remove는 실제로 요소들을 삭제하는 것이 아니라 삭제할 요소의 위치에 삭제하지 않을 요소를 덮어씀
	// => 컨테이너의 크기가 유지되고 컨테이너의 뒤에 삭제한 요소의 수만큼 쓸데없는 값들이 남게됨
	remove(컨테이너.begin(), 컨테이너.end(), 값);

	// erase는 실제로 요소를 삭제하고 뒤에 있는 요소들을 앞당겨온다
	// => 컨테이너의 크기가 작아짐, 뒤에 있는 요소들을 당겨오는 것에서 오버헤드가 발생
	컨테이너.erase(key);
	컨테이너.erase(iterator);
	컨테이너.erase(컨테이너.begin(), 컨테이너.end());
}