// ch04_varialbe
#include <stdio.h>
/*
상수 : 값을 변경할 수 없음

리터럴 상수(literal)
- 소스 코드안의 고정된 데이터 값

자료형
- 데이터를 저장하는 공간을 만들 때 사용하는 이름입니다.
  > 정수 : int		-> 4byte
  > 실수 : double   -> 8byte
  > 문자 : char		-> 1byte

변수
- 메모리에 데이터 저장하는 공간을 만들고, 이름을 붙여서 사용하는 데이터 값

변수명 작성 규칙
- 영문자, 숫자, 밑줄(_) 만을 사용합니다.
- 이름의 시작은 영문자, 밑줄(_)로 시작해야 합니다.(a1 -> O / 1a -> X)
- 예약어는 사용할 수 없습니다.
- 대,소문자를 구별합니다(Name, name은 다른 변수)
- 변수명 안에는 공백을 사용할 수 없습니다.(a_1 -> O / a 1 -> X)
- 자료형이 다르고 해서 같은 이름을 사용할 수 없습니다.




*/
int main()
{
	printf("숫자 : %d\n", 10);

	//정수
	int a; // 변수 선언(생성)
	// print("a : %d\n", a); Error
	// 초기화 되지 않은 변수를 사용하면 Error

	a = 10;
	printf("a : %d\n", a);
	printf("\n");

	a = 22;
	printf("a : %d\n", a);
	printf("\n");

	int age = 20;
	printf("나이 : %d\n", age);
	printf("\n");

	//실수
	double pi = 3.141592;
	printf("원주율 : %f\n", pi);
	printf("\n");

	//문자
	char area = 'A';
	printf("%c 구역\n", area);
	printf("\n");

	//문자열
	char hi[10] = "hello";
	printf("%s\n", hi);
	printf("\n");

	// hi = "수정"; Error
	// 문자열 데이터는 대입연산자를 사용해서 값을 변경할 수 없습니다.

	// int n = 10;
	// double n = 1.2; Error

	int v1, v2, v3;
	int n1 = 1, n2 = 2;

	// int ia, double da; Error
	int ia; double da; // Ok

	int b = a;
}