#include <stdio.h>

int main(void)
{
	int x = -50, y = 30;
	int absoluteX = (x>0) ? x : -x;    //조건연산자. (x>0)이 True라면 x반환, False라면 -x반환됨. 즉 absoluteX는 항상 절댓값을 반환히도록 함. 
	int max = (x>y) ? x : y;
	int min = (x<y) ? x : y;
	printf("x의 절댓값은 %d입니다.\n", absoluteX);
	printf("x와 y 중에서 최댓값은 %d입니다.\n", max);
	printf("x와 y 중에서 최솟값은 %d입니다.\n", min);
	return 0;
}
