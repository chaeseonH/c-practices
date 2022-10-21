int main(void)
{
	int color;
	int R=0, G=0, B=0; 
	char channel, answer;
	int change;
	
	do
	{
	
	printf("16진수 컬러 코드값을 입력하세요.: ");
	scanf("%x \n", &color);
	
	//and와 오른쪽 shift 비트 연산 이용해서 RGB값으로 변환//
	
	R = color>>16;
	G = color>>8 & 0xFF;
	B = color & 0xFF;
	
	//and와 오른쪽 shift 비트 연산 이용해서 RGB값으로 변환//
	
	
	printf("입력된 컬러의 R,G,B 값은 (%d, %d, %d)입니다.\n", R,G,B);
	
	while(1)
	{
	    printf("RGB 중 변경할 컬러 채널을 입력하세요: ");
	    scanf("%c\n", &channel);
	    printf("%c", channel);
	
	    if(channel=='r')
	    {
		    printf("R 채널의 증감 정도를 입력하세요.: ");
    		scanf(" %d\n", &change);
	  	    R = R+change;
	  	    break; 
	    }
        else if(channel=='g')
        {
    		printf("G 채널의 증감 정도를 입력하세요.: ");
    		scanf(" %d\n", &change);
    		G = G+change;
    		break;
	    }
	    
      	else if(channel=='b')
      	{
	    	printf("B 채널의 증감 정도를 입력하세요.: ");
		    scanf(" %d\n", &change);
        	B = B+change;
        	break;
    	}
        else
		{
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
			continue;
		}
    }  
	printf("조정된 컬러의 R, G, B값은 (%d, %d, %d)이고, 이는 %x 로 저장됩니다.\n ", R, G, B, color);
	
	
	printf("계속 컬러를 조정하시겠습니까?(y/n)");
	scanf("%c", &answer);
	
	
	
    }while(answer=="y");
	return 0;
}
