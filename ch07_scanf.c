// ch07_scanf

#include <stdio.h>
/*
scanf()
- scanf( "서식지정자", 입력위치(주소) );
  scanf_s( "서식지정자", 입력위치(주소), 허용크기(byte) );

  > scanf_s() 함수로 문자, 문자열 입력을 처리할 때에는 허용크기 값을 지정해야 합니다.
  > SDL 검사 실행시 scanf_s() 함수를 사용해서 코드를 작성해야 합니다.
	- 1. 솔루션 탐색기 프로젝트 명에서 마우스 우측 클릭 -> 마지막 속성 선택
	- 2. 속성페이지 왼쪽 목록에서 C/C++ 선택 -> 오른쪽 목록 아래 SDL 검사 설정


  
*/
//int main() {

	////문자 입력
	//char ch;
	//printf("문자 입력> ");
	//ch = getchar();				//문자 하나 입력
	//putchar(ch);				//문자 하나 출력
	//putchar('\n');
	//printf("ch : %c\n", ch);
	//printf("\n");

	////정수
	//int ia;
	////scanf("%d", &ia);
	//scanf_s("%d", &ia);
	//printf("ia :%d\n", ia);
	//printf("\n");

	////실수
	//// - %f			 : float 타입의 실수 데이터 입력처리시 사용
	////   %lf(엘에프) : double 타입의 실수 데이터 입력처리시 사용
	//float fa;
	//double da;
	//printf("실수 2개 입력 > ");
	////scanf(%f%lf", &fa, %da);
	//scanf_s("%f%lf", &fa, &da);
	//printf("fa : %.1f, da : %.1f\n", fa, da);
	//printf("\n");

	//while ( getchar()!= '\n') {} //berfer 대기
	////문자
	//char ca;
	//printf("문자 입력 > ");
	//// scanf("%c", &ca);
	//scanf_s("%c", &ca, 1);
	//scanf_s("%c", &ca, 1);
	//printf("ca : %c\n", ca);
	//printf("\n");

	//// 단어
	//// - 배열명이 가지고 있는 값이 주소이기 때문에, 문자열 입력 시에는 '&'기호를 사용하지 않습니다.
	//// - 실제 처리 가능한 문자수는 '전체크기-1' or '허용크기-1'까지입니다.
	//char wordA[10];
	//prnitf("단어 입력 > ");
	////scanf("%s", wordA);
	//scanf_s("%s", wordA, sizeof(wordA));
	//while (getchar() != '\n');
	//printf("wordA ; %s\n", wordA);
	//printf("\n");

	//// 띄어쓰기 입력
	//// - gets_s( 입력위치, 허용크기 )
	//char stn[100];
	//printf("문장 입력 > ");
	//gets_s(stn, sizeof(stn));
	//printf("stn : %s\n", stn);
	//printf("\n");

	//char data[100];
	//printf("GNU 띄어쓰기 입력 > ");
	//scanf("%[^\n]", data);
	//printf("data : %s\n", data);

	/*char ch1, ch2;
	printf("문자 2개 입력 > ");
	scanf_s("%c %c", &ch1, 1, &ch2, 1);
	printf("ch1 : %c, ch2 :%c\n", ch1, ch2);
}*/

// -------------------------------------------

// 이름, 주소, 나이, 성별, 키를 입력받아서 출력하는 코드를 작성하세요..
// - 주소는 띄어쓰기가 가능합니다
// - 성별은 m, f 로 처리합니다

// 영문 이름의 이니셜 3개를 하나씩 입력받아서 출력하는 코드를 작성하세요

// 세과목의 점수를 입력받아서 총점, 평균을 구하는 코드를 작성하세요
// - 평균은 소수점 첫째자리까지 출력하세요
// ----------------------------------------------

//이름 주소 나이 성별 키 입/출력
//int main() {
//
//	char name[20];
//	printf("이름 입력 > ");
//	scanf_s("%s", &name,sizeof(name));
//	while (getchar() != '\n');
//
//	char address[200];
//	printf("주소 입력 > ");
//	gets_s(address, sizeof(address));
//
//	int age;
//	printf("나이 입력 > ");
//	scanf_s("%d", &age);
//	while (getchar() != '\n');
//
//	char sex;
//	printf("성별 입력(m/f) > ");
//	sex = getchar();
//
//	printf("이름 : %s\n", name);
//	printf("주소 : %s\n", address);
//	printf("성별 : %c\n", sex);
//	printf("나이 : %d살\n", age);
//}

// -------------------------------------------
// 영문 이름의 이니셜 3개를 하나씩 입력받아서 출력하는 코드를 작성하세요
//int main() {
//
//	char i1, i2, i3;
//	printf("이니셜 3개 입력 > _ _ _\b\b\b\b\b");
//	scanf_s("%c %c %c", &i1, 1, &i2, 1, &i3, 1);
//	puts("");
//
//	printf("이니셜 : %c %c %c\n", i1, i2, i3);
//}
// -------------------------------------------
// 세과목의 점수를 입력받아서 총점, 평균을 구하는 코드를 작성하세요
// - 평균은 소수점 첫째자리까지 출력하세요
//int main()
//{
//	int s1, s2, s3;
//	printf("세과목 점수 입력 > "); scanf_s("%d %d %d", &s1, &s2, &s3);
//	puts("");
//
//	int sum = s1 + s2 + s3;
//	double avg = (double)sum / 3; // sum / 3.0;
//
//	printf("총점 : %d\n", sum);
//	printf("평균 : %.1f\n", avg);
//}

// -------------------------------------------

