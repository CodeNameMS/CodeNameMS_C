// ch12_switch

#include <stdio.h>
/*
switch��
- switch( �� ) {
  case ����� :
		�����ڵ�
		break;
  .....
  case ����� :
		�����ڵ�
		break;
  default :  <- ��Ī�Ǵ� case ���� ������ ������ ���� ( ���O, X )
		�����ڵ�
  }

  > switch �� �ȿ� �� �� �ִ� ���� ���´� ����, ���ڸ� �����մϴ�.
  > switch �� �ȿ� �ִ� ���� ��Ȯ�ϰ� ��ġ�ϴ� case ���� ã�Ƽ� �����մϴ�.
  > case �� ����ϴ� ���� ����� �����մϴ�. ( ���� X )
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
//	printf("C��� : C , Java : J ����"); subject = getchar();
//	puts("");
//
//	switch (subject) {
//
//	case 'C':
//	case 'c':
//		puts("C�� �����ϼ̽��ϴ�..");
//		break;
//	case 'J':
//		puts("Java�� �����ϼ̽��ϴ�..");
//		break;
//	case 'j':
//		puts("Java�� �����ϼ̽��ϴ�..");
//		break;
//	default :
//		puts("���� �����Դϴ�..");
//	}
//	// ����Ǵ� ������ �ٸ����� ����ϰ����ϴ� �ڵ尡 ���ٸ� ���� ����� ����
//}

/*
enum ( ������, enumration)
- enum �̸�{
		����
  }

  > �������� �̸��� �ִ� ����� ����� �� �ֽ��ϴ�.
*/

//enum SELECT {
//	END,   // 0, ���ڰ� �ڵ����� ����
//	START, // 1
//	PAUSE  // 2
//};

//int main() {
//
//	int select;
//	printf("1.���� 2.���� 3.���� >"); scanf_s("%d", &select);
//	puts("");
//
//	switch (select) {
//	case START :
//		puts("���~"); break;
//	case PAUSE :
//		puts("����!"); break;
//	case END :
//		puts("����.."); break;
//	}
//}