int main(void)
{
	int A, Z, result;
	for(A=0; A<10; A++)
	{
		for(Z=0; Z<10; Z++)
		{
			if(A==Z)
			 continue;
			result = (A*10+Z)+(Z*10+A);
			if(result==99)
			{
				printf("%d%d +%d%d = 99\n", A,Z,Z,A);
			}
		}
	}
	
	return 0;
}
