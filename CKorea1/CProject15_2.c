#include<stdio.h>
void main15_2() {

/*int age = 21;
	if (age >= 20)
	{
		printf("성인입니다!!!!!!!");
	}

	printf("\n프로그램을 종료합니다! "); 
*/	

	int value = 15;
	if (value > 10) {
		printf("value는 10보다 큰 수 입니다.\n");

	}
	printf("프로그램을 종료합니다");

	int age;
	printf("나이를 입력하세요!!!!!!!!!!!>>>");
	scanf_s("%d", &age);
	
	if (age >= 20 && age<=200) {
		printf("성인이넹");
	}
	
	if (age >= 1 && age < 20) {
		printf("\n미성년자 입니다!");
	}
	
	if (age < 0 || age >200) {
		printf("\n?");
	}
}