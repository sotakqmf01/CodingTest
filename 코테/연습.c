//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(void) {
//	int testcase = 0, r = 0;
//	char s[21] = { 0 };
//
//	scanf_s("%d%*c", &testcase);
//
//	for (int i = 0; i < testcase; i++) {
//		scanf_s("%d%*c %s", &r, s, _countof(s));
//
//		for (int j = 0; j < strlen(s); j++) {
//			for (int k = 0; k < r; k++) {
//				printf("%c", s[j]);
//			}
//		}
//		putchar('\n');
//	}
//	return 0;
//}