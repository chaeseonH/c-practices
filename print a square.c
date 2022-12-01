#include <stdio.h>
#define N 10

int main(void)
{
	int i, j;
	for(i = 0; i < N; i++) //(i를 초기화, 조건, 반복)
	{
		for(j = 0; j < N; j++)
		{
		printf("*"); 	
		}
		printf("\n");
	 } 
	return 0;
}
