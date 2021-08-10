// ch22_function.c

#include <stdio.h>
/*
함수 ( function )
- 하나의 기능을 가진 작은 프로그램입니다.
- 호출하면 실행이 되고, 실행이 끝나면 호출한 곳으로 돌아갑니다.
*/

// 함수 선언
// - 프로그램 안에 사용자가 정의한 함수가 있음을 알려줍니다.
//   > 반환타입  함수이름 ( 매개변수 );
void Hi();
void DataSend(int param);
double ReturnPi();
char SendReceive(char ch);

int main() {

	//함수 호출
	// - 함수이름 ( 인자값 O, X );
	//  > 인자값 : 함수 실행에 필요한 데이터를 정의부로 보낼 때 사용합니다.
	//			   정의부의 매개변수와 타입, 갯수, 순서가 일치해야 합니다.
	Hi();
	DataSend(10);
	int a = 7;
	DataSend(a);

	printf("원주율 : %f\n", ReturnPi());
	double pi = ReturnPi();
	printf("pi : %f\n", pi);

	char ch = 'A';
	ch = SendReceive(ch);
	printf("ch : %c\n", ch);

}

char SendReceive(char ch) {
	printf("받은 문자 : %c\n", ch);
	ch += 1;
	return ch;
}



double ReturnPi() {
	return 3.141592;
}

void DataSend(int param) {
	printf("받은 데이터 : %d\n", param);
}

void Hi() {
	puts("안녕하세요~ ^^");
}


// 함수 정의 : 함수 호출 시에 실행되는 기능 구현
//
// 반환타입 함수 이름 ( 매개변수 O, X ) {
//		실행코드
//		return 값; ( O, X )
// }
// 반환 타입 : 함수 실행이 종료되면서 호출부로 돌아갈 때 보내지는 값의 자료형
//			   반환값이 없으면 void
// 함수 이름 : 함수 호출(실행)시에 사용하는 이름
// 매개 변수 : 함수 실행 시에 호출부에서 보내진 값을 보관하는 변수
// return	 : 함수 실행에서 나온 결과값을 호출ㄹ부로 보낼 때 사용하거나, 함수 실행을 종료 시킬 때 사용합니다.
//			   딱 하나의 값만 반환할 수 있습니다.
//