#include <stdio.h>

void main3()
{
	char var1 = 'a';
	int var2 = 3;
	double var3 = 3.23;
	char var4[256] = "안녕하세요! 반갑습니다."; //1byte공간을 256개 연결!했다. 참고로 char은 1byte공간임
	//대괄호 안의 숫자는 웬만하면 크게 설정한다.

	printf("%d", var2);//%d라는 위치에 var2가 들어간다.
	printf("%d", var2);//%d라는 위치에 var2가 들어간다.
	printf("%d", var2);//%d라는 위치에 var2가 들어간다.
	printf("%d", var2);//%d라는 위치에 var2가 들어간다.
	printf("%d", var2);//%d라는 위치에 var2가 들어간다. cntrl+d 하면 복붙여러개 쌉가능
	printf("\n정수는 %d", var2);   //%d라는 위치에 var2가 들어간다.
	printf("문자는 %c!", var1);
	printf("소수점 있는 숫자는 %f", var3); //형식문자란 문자열을 통해 출력하고자 하는 데이터의 형(type)을 말한다.
	printf("문자열은 %s! \n", var4);

	/*변수=저장공간-데이터를 저장할 수 있는 저장공간(프로그래밍)
	* 자료형 변수명; 
	*/
	//int num3;/변수 선언(생성)/5라는 값을 num3에 집어 넣는다.
	// 출력하면 4가 출력된다. 왜냐하면 프로그래밍이 위에서 아래로 진행되기 때문이다.
	 
	 //변수선언 + 대입 :초기화(초기값 설정)
}


