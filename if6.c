int main(void)
{
	int P, kor, eng, math;
	
	scanf("%d %d %d\n",&kor, &eng, &math );
	P = (kor+eng+math)/3;
	if(P>=90)
	{
		printf("A");
	}
	else if(P>=80)
	{
		printf("B");
	}
	else if(P>=70)
	{
		printf("C");
	}
	else if(P>=50)
	{
		printf("D");
	}
	else
	{
		printf("F");
	}
	return 0;
}
