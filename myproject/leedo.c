#include <stdio.h>

int main(void)
{
	/*printf("hello world!\n");
	printf("22\n");*/

	/*02-1 예제 문제
	printf("홍길동\n홍 길 동\n홍  길  동\n");*/

	/*02-1 예제 문제 2
	printf("홍길동\n");
	printf("경기도 고양시 야옹구\n");
	printf("010-1111-1111");*/

	/*함수의 이해
	printf("hello everybody\n");
	printf("%d\n", 1234);
	printf("%d %d\n", 10, 20);*/

	/*printf("my age: %d \n", 20);
	printf("%d is my point \n", 100);
	printf("good \nmorning \neverybody\n");*/

	/*문제 02-2
	printf("제 이름은 홍길동입니다.\n제 나이는 %d살이고요.\n제가 사는 곳의 번지수는 %d-%d입니다.\n", 20, 123, 456);
	printf("%dX%d=%d\n", 4, 5, 20);
	printf("%dX%d=%d\n", 7, 9, 7*9);*/

	/*연산
	printf("%d", 3+4);*/

	/*변수 선언
	int num;
	num = 20;
	printf("%d", num);*/

	/*int num1 = 10, num2 = 20;
	int num3 = 30, num4 = 40;

	printf("num1:%d, num2:%d\n", num1, num2);
	printf("num3:%d, num4:%d\n", num3, num4);*/

	//예제
	/*int num1 = 3, num2 = 4;
	int result = num1 + num2;

	printf("덧셈 결과: %d\n", result);
	printf("%d+%d=%d\n", num1, num2, result);
	printf("%d와(과) %d의 합은 %d입니다.\n", num1, num2, result);*/

	//한줄로 변환
	/*int num1 = 3, num2 = 4, result = num1 + num2;

	printf("덧셈결과:%d\n%d+%d=%d\n%d와(과) %d의 합은 %d입니다.\n", result, num1, num2, result, num1, num2, result);*/

	/*int num1 = 2, num2 = 4, num3 = 6;

	num1 += 3;
	num2 *= 4;
	num3 %= 5;

	printf("result: %d, %d, %d\n", num1, num2, num3);*/

	/*int num1 = +2;
	num1 = -num1;
	printf("%d", num1);*/

	/*증가감소 연산자 //증감 연산자는 소괄호를 무시한다.
	int num = 12;
	printf("%d\n", ++num);
	printf("%d\n", num++);
	printf("%d\n", num);*/

	/*관계 연산자
	int num1 = 10, num2 = 12, num3 = 14, num4 = 14;
	int result1, result2, result3, result4, result5, result6;

	result1 = (num1 < num2);
	result2 = (num2 > num1);
	result3 = (num3 == num4); //같냐
	result4 = (num1 != num2); //다르냐
	result5 = (num1 <= num2);
	result6 = (num2 >= num1);

	printf("%d\n%d\n%d\n%d\n%d\n%d\n", result1, result2, result3, result4, result5, result6);*/

	/*논리연산자
	int num1 = 10, num2=12, result1, result2, result3;

	result1 = (num1 == 10 && num2 == 12); //둘다 참이냐
	result2 = (num1 < 12 || num2>12); // 둘중에 하나는 참이냐
	result3 = (!num1); // 거짓이냐(10은 0이 아닌 참이므로 거짓이 아니므로 0을 산출)

	printf("result1: %d\n", result1);
	printf("result2: %d\n", result2), printf("result3: %d\n", result3);*/ // 콤마연산자는 변수나 문장을 동시에 사용하게 해준다.
	//관계 연산자를 먼저 진행하고 그다음 논리연산자를 진행한다.

	/*키보드 데이터 입력
	int result, num1, num2;

	printf("정수 one: ");
	scanf_s("%d", &num1);
	printf("정수 two: ");
	scanf_s("%d", &num2);

	result = num1 + num2;
	printf("%d+%d=%d\n", num1, num2, result); */
	//scanf함수를 쓰라고 책에는 되어 있는데 이게 안되서 찾아보니 scanf_s를 대신 쓰란다. scanf는 버퍼오버플로우에 취약하단다.
	//또는 에러무시 코드 넣으라고 함. 현직 프로그래머도 그냥 오류무시코드 넣는다함.






	return 0;
}