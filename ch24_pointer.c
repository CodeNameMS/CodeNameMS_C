// ch24_pointer.c

#include <stdio.h>

/*
������
- �޸��� �ּҰ��� �����ϴ� �����Դϴ�
  > �Ϲ����� �����ʹ� ���� �� ����, ���� ��� or ������ �ּҸ��� ���� �� �ִ� �����Դϴ�

������ ���� ����(����)
- �ڷ���*  �����ͺ�����

������ ���� �տ� *(������ ������)�� ���̸�, �����Ͱ� ������ �ִ� �ּҰ� ����Ű�� ������ ����ϰ� �˴ϴ�

*/

//int main() {
//
//	int a = 10;
//	int* pa = &a;
//	printf("a �ּ� : %p == pa �� : %p\n", &a, pa);
//	printf("a �� : %d == *pa �� : %d\n", a, *pa);
//	puts("");
//
//	*pa = 123;
//	printf("a : %d\n", a);
//	puts("");
//
//	double b = 2.3;
//	double* pb = &b;
//	printf("b �ּ� : %p == pb �� : %p\n", &b, pb);
//	printf("b �� : %.1f == *pb �� : %.1f\n", b, *pb);
//	puts("");
//
//	char c = 'A';
//	char* pc = &c;
//	printf("c �ּ� : %p == pc �� : %p\n", &c, pc);
//	printf("c �� : %c == *pc �� : %c\n", c, *pc);
//	puts("");
//
//	int value;
//	int* pvalue = &value;
//	printf("���� �Է� > ");
//	scanf_s("%d", pvalue); //scanf_s("%d", &value);
//	printf("value : %d\n", value);
//
//}



//------------------------------------------------------------------------------

/*
������ ���� ũ��
- ������ ������ Ÿ�Կ� ������� ũ�Ⱑ �����մϴ�
*/

//int main() {
//
//	int ia;
//	int* pia = &ia;
//	printf("ia    ũ�� : %d\n", sizeof(ia));
//	printf("pia   ũ�� : %d\n", sizeof(pia));
//	puts("");
//
//	double da;
//	double* pda = &da;
//	printf("da    ũ�� : %d\n", sizeof(da));
//	printf("pda   ũ�� : %d\n", sizeof(pda));
//	puts("");
//
//	char ca;
//	char* pca = &ca;
//	printf("ca    ũ�� : %d\n", sizeof(ca));
//	printf("pca   ũ�� : %d\n", sizeof(pca));
//	puts("");
//
//
//}



//------------------------------------------------------------------------------

/*
������ ����
- �ּҸ� �����ϸ� �ּ��� �ڷ��� ũ�⸦ �������� ó���մϴ�
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
�迭�� ������
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
