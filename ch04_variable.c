// ch04_varialbe
#include <stdio.h>
/*
��� : ���� ������ �� ����

���ͷ� ���(literal)
- �ҽ� �ڵ���� ������ ������ ��

�ڷ���
- �����͸� �����ϴ� ������ ���� �� ����ϴ� �̸��Դϴ�.
  > ���� : int		-> 4byte
  > �Ǽ� : double   -> 8byte
  > ���� : char		-> 1byte

����
- �޸𸮿� ������ �����ϴ� ������ �����, �̸��� �ٿ��� ����ϴ� ������ ��

������ �ۼ� ��Ģ
- ������, ����, ����(_) ���� ����մϴ�.
- �̸��� ������ ������, ����(_)�� �����ؾ� �մϴ�.(a1 -> O / 1a -> X)
- ������ ����� �� �����ϴ�.
- ��,�ҹ��ڸ� �����մϴ�(Name, name�� �ٸ� ����)
- ������ �ȿ��� ������ ����� �� �����ϴ�.(a_1 -> O / a 1 -> X)
- �ڷ����� �ٸ��� �ؼ� ���� �̸��� ����� �� �����ϴ�.




*/
int main()
{
	printf("���� : %d\n", 10);

	//����
	int a; // ���� ����(����)
	// print("a : %d\n", a); Error
	// �ʱ�ȭ ���� ���� ������ ����ϸ� Error

	a = 10;
	printf("a : %d\n", a);
	printf("\n");

	a = 22;
	printf("a : %d\n", a);
	printf("\n");

	int age = 20;
	printf("���� : %d\n", age);
	printf("\n");

	//�Ǽ�
	double pi = 3.141592;
	printf("������ : %f\n", pi);
	printf("\n");

	//����
	char area = 'A';
	printf("%c ����\n", area);
	printf("\n");

	//���ڿ�
	char hi[10] = "hello";
	printf("%s\n", hi);
	printf("\n");

	// hi = "����"; Error
	// ���ڿ� �����ʹ� ���Կ����ڸ� ����ؼ� ���� ������ �� �����ϴ�.

	// int n = 10;
	// double n = 1.2; Error

	int v1, v2, v3;
	int n1 = 1, n2 = 2;

	// int ia, double da; Error
	int ia; double da; // Ok

	int b = a;
}