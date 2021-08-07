// ch18_string.c

#include <stdio.h>
#include <string.h>
///*
//문자열
//- 
//
//*/
//int main() {
//
//	char wordA[10] = "wordA";				// wordA
//	printf("wordA : %s\n", wordA);			//			| w | o | r | d | A | \0 | ...... NULL => 0
//
//	char wordB[] = "wordB";					// wordB
//	printf("wordB : %s\n", wordB);			//			| w | o | r | d | A | \0 |
//	printf("wordB 크기 : %d\n", sizeof(wordB));	
//
//	// 문자열에서 빈 자리는 Null값으로 채워지고 %s는 Null값을 만나면 출력종료.
//
//	char wordC[5] = "good";
//	printf("wordC :%s\n", wordC);
//	// C언어는 문자열의 마지막에 NULL(\0) 값을 사용해서 문자열의 끝을 표시합니다.
//	// 문자열 사용 시에는 항상 NULL 문자가 들어가는 1byte 공간이 추가로 필요합니다.
//
//	char wordD[] = "Good luck";				//wordD
//	printf("wordD : %s\n", wordD);			//			| G | o | o | d |   | l | u | c | k | \0 |
//
//	wordD[3] = '\0';
//	printf("wordD : %s\n", wordD);
//	printf("wordD 크기 : %d\n", sizeof(wordD));
//
//}
//
//// ------------------------------------------------
//
//for (int i = 0; i < sizeof(wordD) - 1; i++) {
//	//		putchar(wordD[i]);
//	//	}
//	//	puts("");
//	//
//	//	printf("시작 주소부터 NULL\0 문자 전까지를 출력합니다\n");
//	//
//	//
//	//}
//
//
//
//	//------------------------------------------------------------------
//
//
//	/*
//	strlen()
//	- strlen( 문자열 )
//	  > NULL 문자 전까지의 문자수를 계산해서 반환하는 함수입니다( byte 단위 )
//	*/
//
//	//int main() {
//	//
//	//	char text[50] = "Have a nice day";
//	//	printf("text : %s\n", text);
//	//	printf("text 크기 : %d\n", sizeof(text));
//	//
//	//	printf("text 문자수 : %d\n", strlen(text));
//	//	int textLength = strlen(text);
//	//	printf("text 문자수 : %d\n", textLength);
//	//	puts("");
//	//
//	//	for (int i = 0; i < strlen(text); i++) {
//	//		putchar(text[i]);
//	//	}
//	//	puts("");
//	//
//	//	int idx = 0;
//	//	while (text[idx] != '\0') {
//	//		putchar(text[idx]);
//	//		++idx;
//	//	}
//	//	puts("");
//	//
//	//
//	//
//	//}
//
//
//
//	//------------------------------------------------------------------


///*
//strcpy()
//- strcpy( 문자열_a, 문자열_b )
//	> 문자열_b를 문자열_a로 복사합니다.
//
//	strcpy_s( 문자열_a, 허용크기, 문자열_b)
//	> 문자열_b를 문자열_a로 복사할 때 허용크기 내 인지를 확인합니다.
//
//*/
//
//int main() {
//
//	char dataA[10];
//	strcpy_s(dataA, sizeof(dataA), "수정");
//	printf("dataA : %s\n", dataA);
//	puts("");
//
//	char dataB[] = "2020 C";
//	strcpy_s(dataA, sizeof(dataA), dataB);
//	printf("dataA : %s\n", dataA);
//
//}

// -----------------------------------------------

/*
strcat()
- strcat( 문자열_a, 문자열_b )
	> 문자열_b의 값을 문자열_a 뒤에 이어 붙입니다.

  strcat_s( 문자열_a, 허용크기, 문자열_b )
	> 문자열_b의 값을 문자열_a 뒤에 이어 붙인 값이 허용크기 내 인지를 확인합니다.
*/

//int main() {
//
//	char base[10] = "abc";
//	printf("base : %s\n", base);
//	puts("");
//
//	char stn[] = "def";
//	strcat_s(base, sizeof(base), stn);
//	printf("base : %s\n", base);
//}

// --------------------------------------------

/*
strcmp()
- strcmp( 문자열_a, 문자열_b )
	> 문자열_a, 문자열_b의 값이 같은 지를 확인합니다.
		- 두 개의 문자열이 같으면 0 을 반환하고, 다르면 -1 or 1을 반환합니다.
*/

//int main() {
//
//	char sameA[10] = "abc";
//	char sameB[5] = "abe";
//	char sameC[] = "abc";
//	printf("sameA : %s\n", sameA);
//	printf("sameB : %s\n", sameB);
//	printf("sameC : %s\n", sameC);
//	puts("");
//
//	printf("sameA , sameB 같은가요 ? : %d\n", strcmp(sameA, sameB));
//	printf("sameB , sameA 같은가요 ? : %d\n", strcmp(sameB, sameA));
//	printf("sameA , sameC 같은가요 ? : %d\n", strcmp(sameA, sameC));
//	puts("");
//
//	if (!strcmp(sameA, sameC)) { //strcmp(sameA, sameC == 0){
//		puts("같아요..");
//	}
//	else {
//		puts("달라요..");
//	}
//}