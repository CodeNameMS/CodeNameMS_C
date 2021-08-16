// ch26_struct.c

#include <stdio.h>
#include <string.h>

typedef struct person {
	char name[20];
	int age;
}Person;

/*
����ü
- �������� ����, �迭�� �ϳ��� ��� ���ο� �ڷ����� ����� ���Դϴ�

����ü ����                                    ����ü ����
struct  ����ü�̸� {
	�ڷ��� ����;  // ����ʵ�         ->        struct ����ü�̸� ������;
	�迭;
	.....
};
*/

//struct test {
//	int a;
//	char b[10];
//};
//
//typedef int Integer;	// typedef -> �ڷ��� int�� �� ��ɾ ����
//typedef struct test Test;
//
// // �ѹ��� typedef�� struct�� ����
//typedef struct test2 {
//	double d;
//	char ch;
//}Test2;
//
//int main() {
//
//	struct test ta;          // ta  int    char[10]
//	                         //   |  a  |     b     |
//
//	Integer a = 10;
//
//	Test tb;
//
//	Test2 sa;
//
//}


//---------------------------------------------------------------------

/*
����ʵ� ���
- ����ü������.����ʵ��
*/

//int main() {
//
//	Person manA = { "none", 0 };               // manA
//	                                           //     |    none   |   0   |
//	                                           //          name      age
//	// manA = { "�߽ż�", 39 };  Error
//	// ����ü ������ ����ʵ� �������� �ѹ��� ������ �� �ִ°�, ���� ������ ���ÿ� �ѹ��� �����մϴ�
//
//	strcpy_s(manA.name, sizeof(manA.name), "�߽ż�");
//	manA.age = 39;
//	printf("�̸� : %s\n", manA.name);
//	printf("���� : %d\n", manA.age);
//	puts("");
//
//	Person manB = manA;
//	printf("%s - %d\n", manB.name, manB.age);
//
//
//
//}
// 
//---------------------------------------------------------------------

/*
����ü �迭
*/

//int main() {
//
//	Person arr[2] = { "���缮", 49, "�ڸ��", 51 };
//
//	int arr_length = sizeof(arr) / sizeof(Person);
//
//	for (int i = 0; i < arr_length; i++) {
//		printf("[%d] : %s - %d\n", i, arr[i].name, arr[i].age);
//	}
//
//
//}


//---------------------------------------------------------------------

//typedef struct member {
//	char id[20];
//	Person basic;
//	//char name[20];
//	//int age;
//}Member;
//
//int main() {
//
//	Member man = { "001", "������", 39 };           // man
//	                                                //   |  id  |      basic     |
//	                                                //          |   name   | age |
//	printf("ID   : %s\n", man.id);
//	printf("�̸� : %s\n", man.basic.name);
//	printf("���� : %d\n", man.basic.age);
//
// }



//---------------------------------------------------------------------



int main() {

	Person son = { "�����",  30 };

	Person* p = &son;

	printf("�̸� : %s, %s\n", p->name, (*p).name);
	printf("���� : %d, %d\n", p->age, (*p).age);
	// *p.name -> Error
	// ����ʵ尡 �����ͺ��� �켱������ ���� ����Ǳ� ����
	// p->name ���ο� ������(ȭ��ǥ ������)

}