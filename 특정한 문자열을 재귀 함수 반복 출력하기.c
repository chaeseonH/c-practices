#include <stdio.h>

//����Լ�(Res=cursive Function), �ڱ� �ڽ��� �����ϴ� ������ �Լ�
 
void print(int count) //count�� �Ű�������..
{
	if(count == 0)
	{
		return;
	 } 
	 
	else
	{
		printf("���ڿ��� ����մϴ�.\n");
	    print(count - 1); //print �Լ� �ȿ��� print�Լ��� �� ����. ����Լ�!!! 
	}
 } 

int main(void)
{  
	int number;
	printf("���ڿ��� �� �� ����ұ��?");
	scanf("%d", &number);
	print(number);
	return 0;
}
