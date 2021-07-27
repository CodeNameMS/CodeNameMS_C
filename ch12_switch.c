// ch12_switch

#include <stdio.h>
/*
switch문
- switch( 값 ) {
  case 상수값 :
		실행코드
		break;
  .....
  case 상수값 :
		실행코드
		break;
  default :  <- 매칭되는 case 값이 없으면 무조건 실행 ( 사용O, X )
		실행코드
  }

  > switch 문 안에 들어갈 수 있는 값의 형태는 정수, 문자만 가능합니다.
  > switch 문 안에 있는 값과 정확하게 일치하는 case 값을 찾아서 실행합니다.
  > case 에 사용하는 값은 상수만 가능합니다. ( 변수 X )
*/
//int main() {
//
//	int value = 1;
//	printf("value : %d\n", value);
//	puts("");
//
//	switch (value)
//	{
//	case 1:
//		puts("1 - one");
//		break;
//	case 2:
//		puts("2 - two");
//		break;
//	case 3:
//		puts("3 - three");
//		break;
//	default:
//		puts("??");
//		break;
//	}
//}

//------------------------

//int main() {
//
//	char subject;
//	printf("C언어 : C , Java : J 선택"); subject = getchar();
//	puts("");
//
//	switch (subject) {
//
//	case 'C':
//	case 'c':
//		puts("C언어를 선택하셨습니다..");
//		break;
//	case 'J':
//		puts("Java를 선택하셨습니다..");
//		break;
//	case 'j':
//		puts("Java를 선택하셨습니다..");
//		break;
//	default :
//		puts("없는 과목입니다..");
//	}
//	// 실행되는 조건은 다르지만 출력하고자하는 코드가 같다면 묶는 방법도 있음
//}

/*
enum ( 열거형, enumration)
- enum 이름{
		변수
  }

  > 여러개의 이름이 있는 상수를 사용할 수 있습니다.
*/

//enum SELECT {
//	END,   // 0, 숫자가 자동으로 붙음
//	START, // 1
//	PAUSE  // 2
//};

//int main() {
//
//	int select;
//	printf("1.시작 2.정지 3.종료 >"); scanf_s("%d", &select);
//	puts("");
//
//	switch (select) {
//	case START :
//		puts("출발~"); break;
//	case PAUSE :
//		puts("정지!"); break;
//	case END :
//		puts("종료.."); break;
//	}
//}