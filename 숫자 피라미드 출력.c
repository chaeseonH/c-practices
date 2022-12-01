#include <stdio.h>

//반복함수를 이용해서 숫자 피라미드 를 출력합니다.
//반복함수 같은 경우는 오직 FOR문과 WHILE문으로 구성이 됩니다.

int print(int a) 
{
	int i, j;
	for (i = 0; i < a; i++) //i는 0, 부터 (main함수에서 입력받는 정수 a)까지 증 
	{
		for(j = 0; j <= i; j++)  //j는 0, 부터  i까지 증가
		{
			printf("%d", j +1); 
		 } 
		 printf("\n");
	}
}

int main(void)
{
	int a;
	scanf("%d", &a);
	print(a); //it is not a PRINTF function, 
	return 0;
	
}
