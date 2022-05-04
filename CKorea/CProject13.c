#include<stdio.h>
void main13()
{
	//조건연산자
	//(3 > 1) ? printf("맞네"):printf("아니네");
	//int age;
	//scanf_s("%d", &age);
	//(age > 19) ? printf("성인입니다!") : printf("미성년자입니다!");


	int age;
	printf("나이를 입력하세요!>>>");
	scanf_s("%d", &age);

	(age >= 20) ? printf("나이는 %d, 요금은 %d", age, 1250) : printf("나이는 %, 요금은 %d", age, 950);

	int age2;
	printf("\n나이를 입력하세요!>>>");
	scanf_s("%d", &age2);
	
	float height;
	printf("\n	키를 입력하세요!>>>");
	scanf_s("%f", &height);

	(age >= 12 && height >= 120) ? printf("\n	탑승 가능합니다!") : printf("\n	탑승 불가능합니다!");




}