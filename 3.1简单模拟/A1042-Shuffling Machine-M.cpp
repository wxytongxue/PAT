#include<cstdio>
/*
 * ԭ�� 
 * 1.���������洢ÿ��λ�ô���˿˵ĳ�ʼ��ŵ�����Card1,Card2���ڵ�һ��ϴ�Ƶ�ʱi����ʼ��ţ�֮�����������໥���� 
 * 2.ÿ13����һ��ǰ׺�����������ж�ǰ׺��ĸ���������жϺ�׺���� 
 * ע�⣺
 * 1.ϴ�ƵĴ�����ͬ��ϴ�Ƶı��˳����ڲ�ͬ�������� 
 * 2. �����Ϊ13�ı�����ʱ�򣬻����0��ţ���ĸǰ׺Ҳ�������һ����Ҫʹ���������13����Ҫ��1 
 */ 
int main()
{
	int N,Shuff[55],Card1[55],Card2[55],S,Y,Time=1;
	scanf("%d",&N);
	//input
	for(int i=1;i<=54;i++)
	{
		scanf("%d",&Shuff[i]);
	}
	
	for(int i=0;i<N;i++)
	{
		for(int i=1;i<=54;i++)
		{
			if(Time==1)
			{
				Card1[Shuff[i]]=i;	
			}
			else if(Time%2==0)
			{
				Card2[Shuff[i]]=Card1[i];	
			}
			else
			{
				Card1[Shuff[i]]=Card2[i];
			}			
		}	
		Time++;
	}
	//print
	for(int i=1;i<=54;i++)
	{
		if(N%2==0)
		{
			S=Card2[i]/13;
			Y=Card2[i]%13;	
		}
		else{
			S=Card1[i]/13;
			Y=Card1[i]%13;
		}
		if(Y==0)
		{
			S--;
			Y=13;
		}
		
		switch(S)
		{
			case 0:
				printf("S%d",Y);
				break;
			case 1:
				printf("H%d",Y);
				break;
			case 2:
				printf("C%d",Y);
				break;
			case 3:
				printf("D%d",Y);
				break;
			case 4:
				printf("J%d",Y);
		}
		if(i!=54)
		{
			printf(" ");
		}
	}
	
	return 0;
}
