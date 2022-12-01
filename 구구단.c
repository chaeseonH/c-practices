int main(void) 
{
	int num, i;
	int result;
	for(num=2; num<10; num++)
	{
		for(i=1; i<num+1; i++)
		{
			result = num*i;
			printf("%d * %d = %d \n", num, i, result);
		}
	}
	return 0;
}
