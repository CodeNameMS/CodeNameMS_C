// ch05_variable-add.c

#include <stdio.h>
/*
������ �ּ� ���
- ������ �տ� '&' ��ȣ�� ���̸� �ش� ������ �޸� �ּҸ� ����ϰ� �˴ϴ�.
- �ּҰ��� ����� ������ '%p'�� ����մϴ�.
*/

//int main()
//{
//	int a = 10;
//	printf("a : %d\n", a);
//	printf("a �ּ� : %p\n", &a);
//}

//----------------------------------------------------------

/*
sizeof()
- �޸𸮿� �Ҵ� �� ������ ������ ũ�⸦ ����մϴ�. (byte ����)

����Ŀ����� �� ��ȯ
- ���� �ٸ� �ڷ����� �����Ϸ��� �� ������, ũ�Ⱑ ���� �ڷ����� ū �ڷ������� �ڵ� ����ȯ�Ǿ� ����˴ϴ�.

*/

//int main() {
//	double result;
//
//	result = 5 / 2;
//	printf("result : %f\n", result);
//	printf("5/2 ����� ũ�� : %d\n", sizeof(5 / 2));
//	printf("resultũ�� : %d\n", sizeof(result));
//	printf("\n");
//
//	result = 5 / 2.0;
//	printf("result : %f\n", result);
//	printf("5/2.0 ����� ũ�� : %d\n", sizeof(5 / 2.0));
//	printf("result�� ũ�� : %d\n", sizeof(result));
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
//	printf("1.0 ũ�� : %d\n", sizeof(1.0));
//	printf("1.0f ũ�� : %d\n", sizeof(1.0f));
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
�ƽ�Ű�ڵ�( ASCII )

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

	char kor[10] = "�ѱ�";
	printf("%10s\n", kor);
	printf("\n");
	// ���������� �ȿ� ������ ����ϸ�, ��½� �ش� ��ġ�� ��������ŭ�� ����Ȯ���� �ϰ� �����͸� ����մϴ�.
	// + : ������ ����, - : ���� ����

	double dataB = 12.3;
	printf("%f\n", dataB);
	printf("%.1f\n", dataB);
	printf("%7.1f\n", dataB);
	// �Ǽ� ������ ��½� ���������ھȿ� '.����'�� ����ϸ� �ش� ��ġ�� ���ڱ����� �Ҽ��� �ڸ��� ����մϴ�.


}