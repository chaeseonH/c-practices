#include <stdio.h>

int main(void)
{
	int x = 50, y = 30;
	printf("x와 y가 같은가? %d\n", x == y);
	//False값은 0 ,True값은 1으로
	printf("x와 y가 같은가? %d\n", x != y);
	printf("x가 y보다 큰가? %d\n", x > y);
	 
	 printf("x와 y가 같은가? %d\n", x = y);
	return 0;
}
