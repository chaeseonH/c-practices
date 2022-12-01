#include <stdio.h>

int main(void)
{
	int x = 50, y = 30;
	printf("x is bigger than y and y is smaller than 40. %d\n", (x>y) && (y<40));
	printf("x is smaller than y or y is 30. %d\n", (x<y) || (y==30));
	printf("x is not 50. %d\n", x != 50);
	return 0;
}
