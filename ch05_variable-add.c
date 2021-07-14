// ch05_variable-add.c

#include <stdio.h>
/*
변수의 주소 사용
- 변수명 앞에 '&' 기호를 붙이면 해당 변수의 메모리 주소를 사용하게 됩니다.
- 주소값을 출력할 때에는 '%p'를 사용합니다.
*/

//int main()
//{
//	int a = 10;
//	printf("a : %d\n", a);
//	printf("a 주소 : %p\n", &a);
//}

//----------------------------------------------------------

/*
sizeof()
- 메모리에 할당 된 데이터 공간의 크기를 계산합니다. (byte 단위)

연산식에서의 형 변환
- 서로 다른 자료형이 연산하려고 할 때에는, 크기가 작은 자료형이 큰 자료형으로 자동 형변환되어 실행됩니다.

*/

//int main() {
//	double result;
//
//	result = 5 / 2;
//	printf("result : %f\n", result);
//	printf("5/2 결과의 크기 : %d\n", sizeof(5 / 2));
//	printf("result크기 : %d\n", sizeof(result));
//	printf("\n");
//
//	result = 5 / 2.0;
//	printf("result : %f\n", result);
//	printf("5/2.0 결과의 크기 : %d\n", sizeof(5 / 2.0));
//	printf("result의 크기 : %d\n", sizeof(result));
//}

//--------------------------------------------------------------

//int main() {
//
//	double d = 12.3;
//
//	int n = d;
//	printf("n : %d\n", n);
//
//	float f = 1.1f;
//
//	printf("1.0 크기 : %d\n", sizeof(1.0));
//	printf("1.0f 크기 : %d\n", sizeof(1.0f));
//}

//---------------------------------------------------
//int main()
//{
//	int ia = 5;
//	int ib = 2;
//	double div;
//
//	div = ia / ib;
//	printf("div : %f\n", div);
//	printf("\n");
//
//	div = (double)ia / ib;
//	printf("div : %f\n", div);
//	printf("\n");
//}

//----------------------------------------
/*
아스키코드( ASCII )

*/
//int main() {
//	
//	char ca = 'A';
//	printf("ca : %c\n", ca);
//
//	int na = ca + 1;
//	printf("na : %d, %c\n", na, na);
//
//	char sa = ca + 32;
//	printf("sa : %c, %d\n", sa, sa);
//
//	char ln = '\n';
//	printf("ln : %c, %d\n", ln, ln);
//}

//---------------------------------

int main() {

	int dataA = 123;
	printf("%d\n", dataA);
	printf("%5d\n", dataA);
	printf("%-5d\n", dataA);

	char kor[10] = "한국";
	printf("%10s\n", kor);
	printf("\n");
	// 서식지정자 안에 정수를 사용하면, 출력시 해당 위치에 정수값만큼의 공간확보를 하고 데이터를 출력합니다.
	// + : 오른쪽 맞춤, - : 왼쪽 맞춤

	double dataB = 12.3;
	printf("%f\n", dataB);
	printf("%.1f\n", dataB);
	printf("%7.1f\n", dataB);
	// 실수 데이터 출력시 서식지정자안에 '.숫자'를 사용하면 해당 위치에 숫자까지의 소수점 자리를 출력합니다.


}