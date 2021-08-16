// ch26_struct.c

#include <stdio.h>
#include <string.h>

typedef struct person {
	char name[20];
	int age;
}Person;

/*
구조체
- 여러개의 변수, 배열을 하나로 묶어서 새로운 자료형을 만드는 것입니다

구조체 선언                                    구조체 변수
struct  구조체이름 {
	자료형 변수;  // 멤버필드         ->        struct 구조체이름 변수명;
	배열;
	.....
};
*/

//struct test {
//	int a;
//	char b[10];
//};
//
//typedef int Integer;	// typedef -> 자료형 int를 쓸 명령어를 변경
//typedef struct test Test;
//
// // 한번에 typedef와 struct를 선언
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
멤버필드 사용
- 구조체변수명.멤버필드명
*/

//int main() {
//
//	Person manA = { "none", 0 };               // manA
//	                                           //     |    none   |   0   |
//	                                           //          name      age
//	// manA = { "추신수", 39 };  Error
//	// 구조체 변수의 멤버필드 여러개에 한번에 접근할 수 있는건, 변수 생성과 동시에 한번만 가능합니다
//
//	strcpy_s(manA.name, sizeof(manA.name), "추신수");
//	manA.age = 39;
//	printf("이름 : %s\n", manA.name);
//	printf("나이 : %d\n", manA.age);
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
구조체 배열
*/

//int main() {
//
//	Person arr[2] = { "유재석", 49, "박명수", 51 };
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
//	Member man = { "001", "김준현", 39 };           // man
//	                                                //   |  id  |      basic     |
//	                                                //          |   name   | age |
//	printf("ID   : %s\n", man.id);
//	printf("이름 : %s\n", man.basic.name);
//	printf("나이 : %d\n", man.basic.age);
//
// }



//---------------------------------------------------------------------



int main() {

	Person son = { "손흥민",  30 };

	Person* p = &son;

	printf("이름 : %s, %s\n", p->name, (*p).name);
	printf("나이 : %d, %d\n", p->age, (*p).age);
	// *p.name -> Error
	// 멤버필드가 포인터보다 우선순위가 높게 연산되기 때문
	// p->name 에로우 연산자(화살표 연산자)

}