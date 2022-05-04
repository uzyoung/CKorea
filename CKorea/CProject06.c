#include<stdio.h>   //std:standard의 줄임말, io:input & output의 줄임말

void main6()
{
	//연산자(계산)
	// = ->대입의 의미 
	//== ->같다라는 것을 의미
	//+,-,*,/
	//+:더하기, -:빼기, *:곱하기, /:나누기, %:나머지 구하기
	
	int num1, num2;
	num1 = 1, num2 = 2; //대입
/*num1 = num2
		/왼쪽은공간,오른쪽은 값을 의미함.
*/
	

	int sum = num1 + num2;
	int sub = num2 - num1;
	int mul = num1 * num2;
	float div = num1 / num2;//이러면 원하는 답이 안나옴 따라서 int형을 float형으로 바꿔줘야 한다(우선순위가 float가더높음)

	float div = (float)num1 / num2;


	printf("%f", div);
	printf("%.1f", div); //소수점 아래 첫째자리까지만 보여준다.
	
	int ampersand = num1 % num2;// num1을 num2로 나눈 나머지를 출력해준다. 배수나 짝홀 구분할 때 많이 쓰인다.
	


}