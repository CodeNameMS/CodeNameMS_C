//ch02_escape

#include <stdio.h>
/*
escape 문자

\n : 라인변경
\t : tab 크기만큼 이동(8칸 확보)
\b : 왼쪽으로 한 칸 이동
\r : 해당 라인의 처음으로 이동

*/
int main()
{
	printf("이제 진짜 여름인가봐요..\n");
	printf("건강관리 잘 하시고, 한달 동안 열심히 하세요..\n");
	printf("12345678123456781234567812345678\n");
	printf("탭\t이동확인\t!\n");
	printf("왼쪽으로 한칸 이동 12\b345\n");
	printf("라인의 처음으로 이동\rab");
}