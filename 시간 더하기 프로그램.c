#include <stdio.h>

// ���� ����
int hour;
int minute;
int minuteAdd;

int counter() 
{
	minute += minuteAdd;
	hour += minute / 60;
	minute %= 60;
	hour %= 24;
	return minute;
}
int main(void)
{
	printf("�ø� �Է��Ͻÿ� :");
	scanf("%d", &hour);
	printf("���� �Է��Ͻÿ� :");
	scanf("%d", &minute);
	printf("���� ���� �Է��Ͻÿ� :");
	scanf("%d", &minuteAdd);
	counter();
	printf("������ �ð��� %d�� %d�� �Դϴ�.", hour, minute);
	 
	return 0;
}
