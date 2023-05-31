
// 학생 3명의 정보를 저장하고 출력하는 프로그램을 만들어보자

/*실행 결과*/
// 첫 번째 학생의 이름을 입력하세요. >> 이성훈
// 두 번째 학생의 이름을 입력하세요. >> 감자
// 세 번째 학생의 이름을 입력하세요. >> 김포테

//이성훈님의 국어, 수학, 영어 성적을 입력하세요 >>50, 30, 20
//감자님의 국어, 수학, 영어 성적을 입력하세요 >>50, 30, 20
//김포테님의 국어, 수학, 영어 성적을 입력하세요 >>50, 30, 20

//이성훈님의 성적은 국어[50] / 수학[30] / 영어[20], 평균은 33.3점입니다.
//....

//소수점자리는 첫 번째 자리까지 표기하도록한다.
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
	
	printf("첫 번째 학생의 이름을 입력하세요. >>");
	scanf("%s", studentA);
	printf("\n두 번째 학생의 이름을 입력하세요. >>");
	scanf("%s", studentB);
	printf("\n세 번째 학생의 이름을 입력하세요. >>");
	scanf("%s", studentC);
	
	printf("%s님의 국어,수학, 영어 성적을 입력하세요 >>", studentA);
	scanf("%lf,%lf,%lf", &studentAscore[0], &studentAscore[1], &studentAscore[2]);
	printf("\n%s님의 국어,수학, 영어 성적을 입력하세요 >>", studentB);
	scanf("%lf,%lf,%lf", &studentBscore[0], &studentBscore[1], &studentBscore[2]);
	printf("\n%s님의 국어,수학, 영어 성적을 입력하세요 >>", studentC);
	scanf("%lf,%lf,%lf", &studentCscore[0], &studentCscore[1], &studentCscore[2]);

	printf("\n%s님의 성적은 국어[%lf], 수힉[%lf], 영어[%lf] 입니다. 평균은 %.1lf입니다.", studentA, studentAscore[0], studentAscore[1], studentAscore[2], studentAscore[0] + studentAscore[1] + studentAscore[2] / 3);
	printf("\n%s님의 성적은 국어[%lf], 수힉[%lf], 영어[%lf] 입니다. 평균은 %.1lf입니다.", studentB, studentBscore[0], studentBscore[1], studentBscore[2], studentBscore[0] + studentBscore[1] + studentBscore[2] / 3);
	printf("\n%s님의 성적은 국어[%lf], 수힉[%lf], 영어[%lf] 입니다. 평균은 %.1lf입니다.", studentC, studentCscore[0], studentCscore[1], studentCscore[2], studentCscore[0] + studentCscore[1] + studentCscore[2] / 3);
	return 0;
}