int main(void)
{
	int color;
	int R=0, G=0, B=0; 
	char channel, answer;
	int change;
	
	do
	{
	
	printf("16���� �÷� �ڵ尪�� �Է��ϼ���.: ");
	scanf("%x \n", &color);
	
	//and�� ������ shift ��Ʈ ���� �̿��ؼ� RGB������ ��ȯ//
	
	R = color>>16;
	G = color>>8 & 0xFF;
	B = color & 0xFF;
	
	//and�� ������ shift ��Ʈ ���� �̿��ؼ� RGB������ ��ȯ//
	
	
	printf("�Էµ� �÷��� R,G,B ���� (%d, %d, %d)�Դϴ�.\n", R,G,B);
	
	while(1)
	{
	    printf("RGB �� ������ �÷� ä���� �Է��ϼ���: ");
	    scanf("%c\n", &channel);
	    printf("%c", channel);
	
	    if(channel=='r')
	    {
		    printf("R ä���� ���� ������ �Է��ϼ���.: ");
    		scanf(" %d\n", &change);
	  	    R = R+change;
	  	    break; 
	    }
        else if(channel=='g')
        {
    		printf("G ä���� ���� ������ �Է��ϼ���.: ");
    		scanf(" %d\n", &change);
    		G = G+change;
    		break;
	    }
	    
      	else if(channel=='b')
      	{
	    	printf("B ä���� ���� ������ �Է��ϼ���.: ");
		    scanf(" %d\n", &change);
        	B = B+change;
        	break;
    	}
        else
		{
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
			continue;
		}
    }  
	printf("������ �÷��� R, G, B���� (%d, %d, %d)�̰�, �̴� %x �� ����˴ϴ�.\n ", R, G, B, color);
	
	
	printf("��� �÷��� �����Ͻðڽ��ϱ�?(y/n)");
	scanf("%c", &answer);
	
	
	
    }while(answer=="y");
	return 0;
}
