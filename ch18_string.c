// ch18_string.c

#include <stdio.h>
#include <string.h>
///*
//���ڿ�
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
//	printf("wordB ũ�� : %d\n", sizeof(wordB));	
//
//	// ���ڿ����� �� �ڸ��� Null������ ä������ %s�� Null���� ������ �������.
//
//	char wordC[5] = "good";
//	printf("wordC :%s\n", wordC);
//	// C���� ���ڿ��� �������� NULL(\0) ���� ����ؼ� ���ڿ��� ���� ǥ���մϴ�.
//	// ���ڿ� ��� �ÿ��� �׻� NULL ���ڰ� ���� 1byte ������ �߰��� �ʿ��մϴ�.
//
//	char wordD[] = "Good luck";				//wordD
//	printf("wordD : %s\n", wordD);			//			| G | o | o | d |   | l | u | c | k | \0 |
//
//	wordD[3] = '\0';
//	printf("wordD : %s\n", wordD);
//	printf("wordD ũ�� : %d\n", sizeof(wordD));
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
//	//	printf("���� �ּҺ��� NULL\0 ���� �������� ����մϴ�\n");
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
//	- strlen( ���ڿ� )
//	  > NULL ���� �������� ���ڼ��� ����ؼ� ��ȯ�ϴ� �Լ��Դϴ�( byte ���� )
//	*/
//
//	//int main() {
//	//
//	//	char text[50] = "Have a nice day";
//	//	printf("text : %s\n", text);
//	//	printf("text ũ�� : %d\n", sizeof(text));
//	//
//	//	printf("text ���ڼ� : %d\n", strlen(text));
//	//	int textLength = strlen(text);
//	//	printf("text ���ڼ� : %d\n", textLength);
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
//- strcpy( ���ڿ�_a, ���ڿ�_b )
//	> ���ڿ�_b�� ���ڿ�_a�� �����մϴ�.
//
//	strcpy_s( ���ڿ�_a, ���ũ��, ���ڿ�_b)
//	> ���ڿ�_b�� ���ڿ�_a�� ������ �� ���ũ�� �� ������ Ȯ���մϴ�.
//
//*/
//
//int main() {
//
//	char dataA[10];
//	strcpy_s(dataA, sizeof(dataA), "����");
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
- strcat( ���ڿ�_a, ���ڿ�_b )
	> ���ڿ�_b�� ���� ���ڿ�_a �ڿ� �̾� ���Դϴ�.

  strcat_s( ���ڿ�_a, ���ũ��, ���ڿ�_b )
	> ���ڿ�_b�� ���� ���ڿ�_a �ڿ� �̾� ���� ���� ���ũ�� �� ������ Ȯ���մϴ�.
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
- strcmp( ���ڿ�_a, ���ڿ�_b )
	> ���ڿ�_a, ���ڿ�_b�� ���� ���� ���� Ȯ���մϴ�.
		- �� ���� ���ڿ��� ������ 0 �� ��ȯ�ϰ�, �ٸ��� -1 or 1�� ��ȯ�մϴ�.
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
//	printf("sameA , sameB �������� ? : %d\n", strcmp(sameA, sameB));
//	printf("sameB , sameA �������� ? : %d\n", strcmp(sameB, sameA));
//	printf("sameA , sameC �������� ? : %d\n", strcmp(sameA, sameC));
//	puts("");
//
//	if (!strcmp(sameA, sameC)) { //strcmp(sameA, sameC == 0){
//		puts("���ƿ�..");
//	}
//	else {
//		puts("�޶��..");
//	}
//}