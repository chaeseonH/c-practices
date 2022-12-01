#include <stdio.h>

int main(void)
{
	int x = 100;
	printf("현재 x의 값:%d\n", x);
	x += 50;
	printf("현재 x의 값:%d\n", x);
	x -= 50;
	printf("현재 x의 값:%d\n", x);
	x *= 50;
	printf("현재 x의 값:%d\n", x);
	x /= 50;
	printf("현재 x의 값:%d\n", x);
	return 0;
}
