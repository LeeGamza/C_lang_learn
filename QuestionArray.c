
// �л� 3���� ������ �����ϰ� ����ϴ� ���α׷��� ������

/*���� ���*/
// ù ��° �л��� �̸��� �Է��ϼ���. >> �̼���
// �� ��° �л��� �̸��� �Է��ϼ���. >> ����
// �� ��° �л��� �̸��� �Է��ϼ���. >> ������

//�̼��ƴ��� ����, ����, ���� ������ �Է��ϼ��� >>50, 30, 20
//���ڴ��� ����, ����, ���� ������ �Է��ϼ��� >>50, 30, 20
//�����״��� ����, ����, ���� ������ �Է��ϼ��� >>50, 30, 20

//�̼��ƴ��� ������ ����[50] / ����[30] / ����[20], ����� 33.3���Դϴ�.
//....

//�Ҽ����ڸ��� ù ��° �ڸ����� ǥ���ϵ����Ѵ�.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char studentA[10];
	char studentB[10];
	char studentC[10];
	double studentAscore[3];
	double studentBscore[3];
	double studentCscore[3];
	
	printf("ù ��° �л��� �̸��� �Է��ϼ���. >>");
	scanf("%s", studentA);
	printf("\n�� ��° �л��� �̸��� �Է��ϼ���. >>");
	scanf("%s", studentB);
	printf("\n�� ��° �л��� �̸��� �Է��ϼ���. >>");
	scanf("%s", studentC);
	
	printf("%s���� ����,����, ���� ������ �Է��ϼ��� >>", studentA);
	scanf("%lf,%lf,%lf", &studentAscore[0], &studentAscore[1], &studentAscore[2]);
	printf("\n%s���� ����,����, ���� ������ �Է��ϼ��� >>", studentB);
	scanf("%lf,%lf,%lf", &studentBscore[0], &studentBscore[1], &studentBscore[2]);
	printf("\n%s���� ����,����, ���� ������ �Է��ϼ��� >>", studentC);
	scanf("%lf,%lf,%lf", &studentCscore[0], &studentCscore[1], &studentCscore[2]);

	printf("\n%s���� ������ ����[%lf], ����[%lf], ����[%lf] �Դϴ�. ����� %.1lf�Դϴ�.", studentA, studentAscore[0], studentAscore[1], studentAscore[2], studentAscore[0] + studentAscore[1] + studentAscore[2] / 3);
	printf("\n%s���� ������ ����[%lf], ����[%lf], ����[%lf] �Դϴ�. ����� %.1lf�Դϴ�.", studentB, studentBscore[0], studentBscore[1], studentBscore[2], studentBscore[0] + studentBscore[1] + studentBscore[2] / 3);
	printf("\n%s���� ������ ����[%lf], ����[%lf], ����[%lf] �Դϴ�. ����� %.1lf�Դϴ�.", studentC, studentCscore[0], studentCscore[1], studentCscore[2], studentCscore[0] + studentCscore[1] + studentCscore[2] / 3);
	return 0;
}