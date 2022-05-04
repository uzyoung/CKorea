#include<stdio.h>

void main10()
{
	//국어 수학 영어 입력 받아서
	//총점과 평균

	//숫자1, 숫자2:입력받아서
	//더하기 빼기 곱하기 나누기

	int Korean;
	int math;
	int English;

	scanf_s("%d", &Korean);
	scanf_s("\n%d",&math);
	scanf_s("\n%d",&English);

	int sum = Korean + math + English;

	printf("국어점수는 %d점 입니다!.", Korean);
	printf("\n수학점수는 %d점 입니다!", math);
	printf("\n영어점수는 %d점입니다!", English);
	printf("\n총점은 %d점입니다.", sum);

	int num1;
	int num2;
	
	scanf_s("%d", &num1);
	scanf_s("%d",&num2);

	printf("두 수의 합은 %d입니다.", num1 + num2);
	printf("두 수의 차는 %d입니다.", num1 - num2);
	printf("두 수의 곱은 %d입니다.", num1 * num2);
	printf("두 수의 나눗셈은 %d입니다.", num1 / num2);


}