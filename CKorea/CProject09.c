#include<stdio.h>

void main9(){

	int num1;//입력한 숫자를 담을 공간이 필요하다.
	float num2;
	char c;
	char string[256];


	scanf_s("%d", &num1);
	scanf_s("%f", &num2);
	getchar();
	scanf_s("%c", &c, (int)sizeof(c));

	scanf_s("%s", &string, sizeof(string));

	printf("num1에 들어간 값은 %d이다.", num1);
	printf("num2에 들어갈 숫자는 %f이다.", num2);
	printf("문자에 들어갈 값은 %c이다.", c);
	printf("문자열에 들어간 값은 %s이다.", string);




		// scanf_s는 입력함수!!!!!

}