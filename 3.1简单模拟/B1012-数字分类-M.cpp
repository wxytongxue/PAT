#include<cstdio>
/*
 * ԭ�� 
 * 1.���뼴�жϣ�A�����Ÿ��Խ�� 
 * 2.A������Ӧλ�õ�ֵ�Ƿ�Ϊ0�ж��Ƿ��и�������(�ڶ������) 
 * 3.����������ó������ 
 * 4.���һ���ó���������� 
 * ע�⣺
 * 1.�ڶ��಻����A[1]Ϊ0���жϸ���û���֣���
 * 2.������Ҫ��������ת�� 
 */ 
int main()
{
	int N,ans,n1=1,n2=0;
	int A[5]={0};
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%d",&ans);
		switch(ans%5)
		{
			case 0:
				if(ans%2 == 0)
				{
					A[0]+=ans;
				}
				break;
			case 1:
				if(n1%2==1)
				{
					A[1]+=ans;
					n1++;
				}
				else{
					A[1]-=ans;
					n1++;
				}
				break;
			case 2:
					A[2]++;
				break;
			case 3:
					A[3]+=ans;
					n2++;
				break;
			case 4:
					if(ans>A[4])
					{
						A[4]=ans;
					}
				break;
		}
	}
	
	for(int i=0;i<5;i++)
	{
		if(A[i]==0&&(i!=1||n1==1))
		{
			printf("N");
		}
		else if(i==3)
		{
			printf("%0.1f",((double)A[3])/n2);
		}
		else{
			printf("%d",A[i]);
		}
		if(i!=4)
		{
			printf(" ");
		}
	}	
	return 0;
} 
