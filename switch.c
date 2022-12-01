int main(void)
{
	
	int num;
	printf("1이상 5이하의 정수 입력: ");
	scanf("%d", &num);
	
	switch(num)
	{
		case 1:
			printf("1은 ONE \n");
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
