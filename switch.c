int main(void)
{
	
	int num;
	printf("1�̻� 5������ ���� �Է�: ");
	scanf("%d", &num);
	
	switch(num)
	{
		case 1:
			printf("1�� ONE \n");
			break;
		case 2:
			printf("2 is TWO \n");
			break;
		case 3:
			printf("3 is THREE \n");
			break;
		case 4:
			printf("4 is FOUR \n");
			break;
		default:
			printf("I don't know'");
	}
	
	return 0;
}
