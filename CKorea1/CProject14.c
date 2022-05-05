//C언어 기본포맷
#include <stdio.h>

void main14() {
	printf("Hello world!");
	int var1;
	float var2;
	char var3; // 문자형태의 저장공간
	char var4[256] = "지구정복";

	var1 = 33;
	var2 = 3.24;
	var3 = 'a';

	printf("%d,\n %f,\n %c,\n %s", var1, var2, var3, var4);
	scanf_s("%d", &var1);
	printf("%d \n", var1);
	scanf_s("%s \n", &var4, 255);//문자열은 총 길이까지 적어줘야 함!!

}