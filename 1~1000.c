#include <stdio.h>

int main(void)
{
	int i = 1, sum = 0; //sum�� 1~1000�� ���� �ǹ�
	while(i <= 1000)
	{
		sum = sum + i;
		i++;
		//i�� 1000�� �� ������ ���� �ö�, �ݺ�.  
	 } 
	 printf("1~1000�� ���� %d�Դϴ�.\n", sum); 
	return 0;
}
