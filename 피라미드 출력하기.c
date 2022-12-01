#include <stdio.h>
#define N 20

int main(void)
{
	int i, j;
	for(i = 0; i < N; i++) // for문 안에서 int로 초기화할 수 없음. 
	{
		for(j = N - i - 1; j > 0; j--)
		{
			printf(" ");
		}
		
		
		for(j = 0; j < i; j++)
		{
			printf("*");
		}
		
		
		for(j = 0; j < i - 1; j++)
		{
			printf("*");
		}
		printf("\n") ;
	}
	return 0;
}
