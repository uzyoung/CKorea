#include<stdio.h>
void main15_1() {
	int var1;
	int var2;

	printf("임의의 자연수 하나를 입력하세욥>>>");
	scanf_s("%d", &var1);
	
	printf("또 다른 임의의 자연수 하나를 입력하세욥>>>");
	scanf_s("%d", &var2);
	
	printf("두 자연수의 합은 %d이얌.", var1 + var2);
	printf("\n두 자연수의 차는 %d이얌", var1 - var2);
	printf("\n두 자연수의 곱은 %d이얌", var1 * var2);
	printf("\n두 자연수의 나눗셈은 %d이얌", var1 / var2);
	printf("\n두 자연수의 나눗셈에 대한 나머지는 %d이얌", var1 % var2);

}