#include<stdio.h>

void main8(){
	int num1, num2;

	num1 = 3;
	num2 = 4;

	num1 = num1 + 3;
	num1 += 3; //누적연산을 의미함.

	num2 -= 3;

	printf("%d", num1);
	printf("\n%d", num2);

	num2++;
	printf("%d", num2);

	



}
