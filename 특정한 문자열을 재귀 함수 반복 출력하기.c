#include <stdio.h>

//재귀함수(Res=cursive Function), 자기 자신을 포함하는 형태의 함수
 
void print(int count) //count를 매개변수로..
{
	if(count == 0)
	{
		return;
	 } 
	 
	else
	{
		printf("문자열을 출력합니다.\n");
	    print(count - 1); //print 함수 안에서 print함수가 또 사용됨. 재귀함수!!! 
	}
 } 

int main(void)
{  
	int number;
	printf("문자열을 몇 개 출력할까요?");
	scanf("%d", &number);
	print(number);
	return 0;
}
