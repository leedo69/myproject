#include <stdio.h>

int main(void)
{
	/*printf("hello world!\n");
	printf("22\n");*/

	/*02-1 ���� ����
	printf("ȫ�浿\nȫ �� ��\nȫ  ��  ��\n");*/

	/*02-1 ���� ���� 2
	printf("ȫ�浿\n");
	printf("��⵵ ���� �߿˱�\n");
	printf("010-1111-1111");*/

	/*�Լ��� ����
	printf("hello everybody\n");
	printf("%d\n", 1234);
	printf("%d %d\n", 10, 20);*/

	/*printf("my age: %d \n", 20);
	printf("%d is my point \n", 100);
	printf("good \nmorning \neverybody\n");*/

	/*���� 02-2
	printf("�� �̸��� ȫ�浿�Դϴ�.\n�� ���̴� %d���̰��.\n���� ��� ���� �������� %d-%d�Դϴ�.\n", 20, 123, 456);
	printf("%dX%d=%d\n", 4, 5, 20);
	printf("%dX%d=%d\n", 7, 9, 7*9);*/

	/*����
	printf("%d", 3+4);*/

	/*���� ����
	int num;
	num = 20;
	printf("%d", num);*/

	/*int num1 = 10, num2 = 20;
	int num3 = 30, num4 = 40;

	printf("num1:%d, num2:%d\n", num1, num2);
	printf("num3:%d, num4:%d\n", num3, num4);*/

	//����
	/*int num1 = 3, num2 = 4;
	int result = num1 + num2;

	printf("���� ���: %d\n", result);
	printf("%d+%d=%d\n", num1, num2, result);
	printf("%d��(��) %d�� ���� %d�Դϴ�.\n", num1, num2, result);*/

	//���ٷ� ��ȯ
	/*int num1 = 3, num2 = 4, result = num1 + num2;

	printf("�������:%d\n%d+%d=%d\n%d��(��) %d�� ���� %d�Դϴ�.\n", result, num1, num2, result, num1, num2, result);*/

	/*int num1 = 2, num2 = 4, num3 = 6;

	num1 += 3;
	num2 *= 4;
	num3 %= 5;

	printf("result: %d, %d, %d\n", num1, num2, num3);*/

	/*int num1 = +2;
	num1 = -num1;
	printf("%d", num1);*/

	/*�������� ������ //���� �����ڴ� �Ұ�ȣ�� �����Ѵ�.
	int num = 12;
	printf("%d\n", ++num);
	printf("%d\n", num++);
	printf("%d\n", num);*/

	/*���� ������
	int num1 = 10, num2 = 12, num3 = 14, num4 = 14;
	int result1, result2, result3, result4, result5, result6;

	result1 = (num1 < num2);
	result2 = (num2 > num1);
	result3 = (num3 == num4); //����
	result4 = (num1 != num2); //�ٸ���
	result5 = (num1 <= num2);
	result6 = (num2 >= num1);

	printf("%d\n%d\n%d\n%d\n%d\n%d\n", result1, result2, result3, result4, result5, result6);*/

	/*��������
	int num1 = 10, num2=12, result1, result2, result3;

	result1 = (num1 == 10 && num2 == 12); //�Ѵ� ���̳�
	result2 = (num1 < 12 || num2>12); // ���߿� �ϳ��� ���̳�
	result3 = (!num1); // �����̳�(10�� 0�� �ƴ� ���̹Ƿ� ������ �ƴϹǷ� 0�� ����)

	printf("result1: %d\n", result1);
	printf("result2: %d\n", result2), printf("result3: %d\n", result3);*/ // �޸������ڴ� ������ ������ ���ÿ� ����ϰ� ���ش�.
	//���� �����ڸ� ���� �����ϰ� �״��� �������ڸ� �����Ѵ�.

	/*Ű���� ������ �Է�
	int result, num1, num2;

	printf("���� one: ");
	scanf_s("%d", &num1);
	printf("���� two: ");
	scanf_s("%d", &num2);

	result = num1 + num2;
	printf("%d+%d=%d\n", num1, num2, result); */
	//scanf�Լ��� ����� å���� �Ǿ� �ִµ� �̰� �ȵǼ� ã�ƺ��� scanf_s�� ��� ������. scanf�� ���ۿ����÷ο쿡 ����ϴܴ�.
	//�Ǵ� �������� �ڵ� ������� ��. ���� ���α׷��ӵ� �׳� ���������ڵ� �ִ´���.






	return 0;
}