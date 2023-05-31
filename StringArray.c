#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	//문자를 쓸 때 항상 char형으로 사용을 했고, 얘는 문자변수지 문자열 변수가 아니야...
	//근데 문자열도 문자열 변수와 문자열 배열이 존재하는데,, 지금 쓰는건 문자열 배열
	char str[50] = "YourName";
	// 원래 중괄호로 묶어 원소를 넣어주는 방식으로 써도 상관은 없는데,, 불편하다.
	//char str[50] = {'Y','O',~~~);
	printf("%s\n", str);

	//printf에서 문자열 배열을 출력하는 방식이 아래와 같다.
	int i = 0;
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		++i;
	}
	//문자열을 입력받는 방법
	char name[20];

	printf("이름을 입력하세요 >>");
	scanf("%s", name);				//배열은 자기이름이 주소이기 때문에 엠퍼센트(&)주소 연산자가 필요가 없다.
	printf("%s", name);

	/* 배열의 크기*/
	//배열은 크기를 꼭 알아야돼 그래야 for문같은 반복문에서 접근하기 용이하기 때문에
	int array2[10];
	printf("배열의 크기 name : %d\n", sizeof(array2));
	printf("배열의 사이즈 : %d", (sizeof(array2) / sizeof(int)));

	int arrSize = sizeof(array2) / sizeof(int);
	for (int i = 0; i < arrSize; ++i)
	{

	}
	return 0;

}