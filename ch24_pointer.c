// ch24_pointer.c

#include <stdio.h>

/*
포인터
- 메모리의 주소값을 저장하는 변수입니다
  > 일반적인 데이터는 가질 수 없고, 오직 상수 or 변수의 주소만을 가질 수 있는 변수입니다

포인터 변수 선언(생성)
- 자료형*  포인터변수명

포인터 변수 앞에 *(역참조 연산자)를 붙이면, 포인터가 가지고 있는 주소가 가리키는 공간을 사용하게 됩니다

*/

//int main() {
//
//	int a = 10;
//	int* pa = &a;
//	printf("a 주소 : %p == pa 값 : %p\n", &a, pa);
//	printf("a 값 : %d == *pa 값 : %d\n", a, *pa);
//	puts("");
//
//	*pa = 123;
//	printf("a : %d\n", a);
//	puts("");
//
//	double b = 2.3;
//	double* pb = &b;
//	printf("b 주소 : %p == pb 값 : %p\n", &b, pb);
//	printf("b 값 : %.1f == *pb 값 : %.1f\n", b, *pb);
//	puts("");
//
//	char c = 'A';
//	char* pc = &c;
//	printf("c 주소 : %p == pc 값 : %p\n", &c, pc);
//	printf("c 값 : %c == *pc 값 : %c\n", c, *pc);
//	puts("");
//
//	int value;
//	int* pvalue = &value;
//	printf("숫자 입력 > ");
//	scanf_s("%d", pvalue); //scanf_s("%d", &value);
//	printf("value : %d\n", value);
//
//}



//------------------------------------------------------------------------------

/*
포인터 변수 크기
- 포인터 변수는 타입에 상관없이 크기가 동일합니다
*/

//int main() {
//
//	int ia;
//	int* pia = &ia;
//	printf("ia    크기 : %d\n", sizeof(ia));
//	printf("pia   크기 : %d\n", sizeof(pia));
//	puts("");
//
//	double da;
//	double* pda = &da;
//	printf("da    크기 : %d\n", sizeof(da));
//	printf("pda   크기 : %d\n", sizeof(pda));
//	puts("");
//
//	char ca;
//	char* pca = &ca;
//	printf("ca    크기 : %d\n", sizeof(ca));
//	printf("pca   크기 : %d\n", sizeof(pca));
//	puts("");
//
//
//}



//------------------------------------------------------------------------------

/*
포인터 연산
- 주소를 연산하면 주소의 자료형 크기를 기준으로 처리합니다
*/

//int main() {
//	
//	int va;
//	int* pva = &va;
//	printf("pva     : %p\n", pva);
//	printf("pva + 1 : %p\n", pva + 1);
//	printf("pva + 2 : %p\n", pva + 2);
//	puts("");
//
//	double vb;
//	double* pvb = &vb;
//	printf("pvb     : %p\n", pvb);
//	printf("pvb + 1 : %p\n", pvb + 1);
//	printf("pvb + 2 : %p\n", pvb + 2);
//	puts("");
//
//	char vc;
//	char* pvc = &vc;
//	printf("pvc     : %p\n", pvc);
//	printf("pvc + 1 : %p\n", pvc + 1);
//	printf("pvc + 2 : %p\n", pvc + 2);
//	puts("");
//
//}



//------------------------------------------------------------------------------

/*
배열과 포인터
*/

//int main() {
//
//	int ar[3] = { 1, 2, 3 };
//	int* p = ar;
//
//	// ar  [0]   [1]   [2]        p
//	//   |  1  |  2  |  3  |       | A0 |
//	//  A0    A4    A8
//	//
//	// ar         (A0) == p         (A0)
//	// ar + 1     (A4) == p + 1     (A4)
//	// *(ar + 1)  ( 2) == *(p + 1)  ( 2)
//	// ar[1]      ( 2) == p[1]      ( 2)
//
//	for (int i = 0; i < 3; i++) {
//		printf("ar[%d] : %d, %d, %d, %d\n", i, ar[i], *(ar + i), *(p + i), p[i]);
//	}
//	puts("");
//
//	// ar += 1; Error
//	p += 1;
//
//	// ++ar; Error
//	++p;
//
//	printf("*p : %d\n", *p);
//	*p = 10;
//	printf("ar[2] : %d\n", ar[2]);
//
//
//}




//------------------------------------------------------------------------------



int main() {

	int a = 10;  // A0
	int b = 20;  // B0
	int c = 30;  // C0

	int* ar[3];

	ar[0] = &a;
	ar[1] = &b;
	ar[2] = &c;

	// ar  [0]  [1]  [2]
	//   | A0 | B0 | C0 |
	//  F0   F4   F8

	printf(" *ar[1] : %d, %d\n", *ar[1], *(*(ar + 1)));
	printf(" *(ar + 1) : %p, %p\n", *(ar + 1), ar[1]);



}
