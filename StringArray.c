#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	//���ڸ� �� �� �׻� char������ ����� �߰�, ��� ���ں����� ���ڿ� ������ �ƴϾ�...
	//�ٵ� ���ڿ��� ���ڿ� ������ ���ڿ� �迭�� �����ϴµ�,, ���� ���°� ���ڿ� �迭
	char str[50] = "YourName";
	// ���� �߰�ȣ�� ���� ���Ҹ� �־��ִ� ������� �ᵵ ����� ���µ�,, �����ϴ�.
	//char str[50] = {'Y','O',~~~);
	printf("%s\n", str);

	//printf���� ���ڿ� �迭�� ����ϴ� ����� �Ʒ��� ����.
	int i = 0;
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		++i;
	}
	//���ڿ��� �Է¹޴� ���
	char name[20];

	printf("�̸��� �Է��ϼ��� >>");
	scanf("%s", name);				//�迭�� �ڱ��̸��� �ּ��̱� ������ ���ۼ�Ʈ(&)�ּ� �����ڰ� �ʿ䰡 ����.
	printf("%s", name);

	/* �迭�� ũ��*/
	//�迭�� ũ�⸦ �� �˾ƾߵ� �׷��� for������ �ݺ������� �����ϱ� �����ϱ� ������
	int array2[10];
	printf("�迭�� ũ�� name : %d\n", sizeof(array2));
	printf("�迭�� ������ : %d", (sizeof(array2) / sizeof(int)));

	int arrSize = sizeof(array2) / sizeof(int);
	for (int i = 0; i < arrSize; ++i)
	{

	}
	return 0;

}