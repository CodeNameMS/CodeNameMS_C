// ch11_if-else if.c

#include <stdio.h>
/*
if ~ else if��
- if ( ���ǽ�_a ) {
	    ���ǽ�_a�� ���̸� ���� �� ����
  }
  else if( ���ǽ�_b ) {
		���ǽ�_a ����, ���ǽ�_b�� ���̸� ���� �� ����
  }
  .......
  else {
		������ ��� ���ǽ��� �����̸� ���� ( ���O, X)
  }

  > Ư������ ã�ų�, �ϳ��� ������ ����ȭ�ؼ� ���� �� ����մϴ�.
  > ������ ��ĥ ��� ū ������ ������ �ڵ��� ���� ������ ����մϴ�.
*/
//int main() {
//
//	int value = 5;
//	printf("vlaue : %d\n", value);
//	puts("");
//
//	puts("- if ������ -");
//	if (value > 0)
//		puts("0���� ū��");
//	if (value > 10)
//		puts("0���� ū��");
//	if (value > 20)
//		puts("0���� ū��");
//	puts("");
//
//	puts("- if ~ else if -");
//	if (value > 0)
//		puts("0���� ū��");
//	else if (value > 10)
//		puts("0���� ū��");
//	else if (value > 20)
//		puts("0���� ū��");
//	puts("");
//}

//int main() {
//
//	int data = 7;
//	printf("data : %d\n", data);
//	puts("");
//
//	if (data >= 1 && data <= 10)
//		puts(" 1 ~ 10 ");
//	if (data >= 11 && data <= 20)
//		puts(" 11 ~ 20 ");
//	if (data >= 21 && data <= 30)
//		puts(" 21 ~ 30 ");
//	puts("");
//
//	if (data >= 1 && data <= 10)
//		puts(" 1 ~ 10 ");
//	else if (data <= 20)
//		puts(" 11 ~ 20 ");
//	else if (data <= 30)
//		puts(" 21 ~ 30 ");
//	puts("");
//}

int main() {

	int n = 9;
	printf("n : %d\n", n);
	puts("");

	if (n % 3 == 0 && n % 5 == 0)
		puts("3 and 5�� ���");
	else if (n % 3 == 0)
		puts("3�� ���");
	else if (n % 5 == 0)
		puts("5�� ���");
	puts("");

}