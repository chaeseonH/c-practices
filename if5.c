int main(void)
{
	int num1, num2, result;
	scanf("%d%d", &num1, &num2);
	result = num1-num2;
	if(result<0)
	{
		printf("%d \n", -result);
		
	}
	else
	{
		printf("%d \n", result);
	}

	return 0;
}
