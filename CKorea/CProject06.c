#include<stdio.h>   //std:standard�� ���Ӹ�, io:input & output�� ���Ӹ�

void main6()
{
	//������(���)
	// = ->������ �ǹ� 
	//== ->���ٶ�� ���� �ǹ�
	//+,-,*,/
	//+:���ϱ�, -:����, *:���ϱ�, /:������, %:������ ���ϱ�
	
	int num1, num2;
	num1 = 1, num2 = 2; //����
/*num1 = num2
		/����������,�������� ���� �ǹ���.
*/
	

	int sum = num1 + num2;
	int sub = num2 - num1;
	int mul = num1 * num2;
	float div = num1 / num2;//�̷��� ���ϴ� ���� �ȳ��� ���� int���� float������ �ٲ���� �Ѵ�(�켱������ float��������)

	float div = (float)num1 / num2;


	printf("%f", div);
	printf("%.1f", div); //�Ҽ��� �Ʒ� ù°�ڸ������� �����ش�.
	
	int ampersand = num1 % num2;// num1�� num2�� ���� �������� ������ش�. ����� ¦Ȧ ������ �� ���� ���δ�.
	


}