#include <stdio.h>

//�ݺ��Լ��� �̿��ؼ� ���� �Ƕ�̵� �� ����մϴ�.
//�ݺ��Լ� ���� ���� ���� FOR���� WHILE������ ������ �˴ϴ�.

int print(int a) 
{
	int i, j;
	for (i = 0; i < a; i++) //i�� 0, ���� (main�Լ����� �Է¹޴� ���� a)���� �� 
	{
		for(j = 0; j <= i; j++)  //j�� 0, ����  i���� ����
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
