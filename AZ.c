#include <stdio.h>

int main(void)
{
	int A,Z;
	int result;
	for(A=0; A<10; A++)
	{
		for(Z=0; Z<10; Z++)
		{
			result = (10*A)+Z+(10*Z)+A;
			if(result==99)
			{
				printf(" %d %d + %d %d =99 \n", A, Z, A, Z);
			}
		}
	}
	
	return 0;
}
