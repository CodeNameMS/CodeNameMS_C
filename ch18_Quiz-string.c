// ch18_Quiz_string

#include <stdio.h>
#include <string.h>

int main() {

	//// 두개의 단어를 입력받아서, 단어순서(ASCII)가 빠른 순서로 출력하는 코드를 작성하세요
	//char text1[10]; 
	//printf("첫번째 단어 입력 : "); scanf_s("%s", &text1, sizeof(text1));
	//while (getchar() != '\n');
	//char text2[10];
	//printf("두번째 단어 입력 : "); scanf_s("%s", &text2, sizeof(text2));
	//
	//if (strcmp(text1, text2)>=0) {
	//	printf("ascii코드 순서 : %s  %s", text2, text1);
	//}
	//else {
	//	printf("ascii코드 순서 : %s  %s", text1, text2);
	//}

	// 로그인 처리 코드를 구현하세요
	// - 로그인 확인시에 사용하는 id, pw 를 설정합니다
	// 로그인 id, pw 를 입력받아서 저장해 놓은값과 일치하는지를 확인해서 성공여부를 알려줍니다

	//char id[10], id_use[10];
	//char pass[10], pass_use[10];

	//printf("아이디 설정 : "); scanf_s("%s", &id, sizeof(id));
	//printf("비밀번호 설정 : "); scanf_s("%s", &pass, sizeof(pass));

	//printf("--------------- 로그인 창 ----------------\n");
	//printf("아이디 입력 : "); scanf_s("%s", &id_use, sizeof(id_use));
	//printf("비밀번호 입력 : "); scanf_s("%s", &pass_use, sizeof(pass_use));
	//puts("");
	//if (!strcmp(id, id_use) && !strcmp(pass, pass_use)) {
	//	printf("%s님이 로그인 하셨습니다.\n", id);
	//}
	//else {
	//	printf("ID 또는 비밀번호 오류입니다. \n");
	//}


	// 단어 or 문장을 입력받고, 입력받은 문자열에서 검색할 문자 하나를 입력받습니다
	// 검색 문자가 문자열에 몇개 있는지를 구하는 코드를 작성하세요
	//char stn[100];
	//char search;
	//printf("단어나 문장 입력 : "); scanf_s("%s",&stn, sizeof(stn));
	//getchar();
	//printf("검색할 문자 입력 : "); search = getchar();

	//int count = 0;
	//for (int i = 0; i < strlen(stn); i++) {
	//	if (stn[i]==search) {
	//		count++;
	//	}
	//}
	//printf("문자열에 포함된 갯수 : %d", count);
	//puts("");
	//// 위에 문자열을 새로운 문자열에 거꾸로 저장하는 코드를 작성하세요
	//char reverse[100];
	//int ridx = strlen(stn) - 1; // 마지막 Null 문자 위치
	//for (int i = 0; i <= ridx; i++) {
	//	reverse[ridx - i] = stn[i];
	//}
	//reverse[ridx + 1] = '\0';
	//printf("%s", reverse);
}