#include<cstdio>
/*
 * ԭ�� 
 * 1.����School���飬�������ʱ��ѧУ����ţ�������ѧУ��������School���� 
 * 2.��ѯһ��ѧУ�ķ�����ʱ�临�Ӷ�O(1)��ʱ��(�ؼ��Ǵ���School������飬���õ���hashԭ��) 
 * 3.�������� School�����ҳ�������ߵ�ѧУ
 
 * ע�⣺
 * 1.�������ֵ��forѭ����Ŀ�ʼ�±�Ϊ1��������ΪN 
 */  

const int MAXN =100010;   //The max num of partner 

int main()
{
	int School[MAXN]={0};
	int N,ScID,Score;
	int k=1,MaxScore=-1;
	
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%d %d",&ScID,&Score);
		School[ScID] +=Score;
	} 
	
	for(int i=1;i<=N;i++)
	{
		if(School[i]>MaxScore)
		{
			k=i;
			MaxScore = School[i];
		}
	}
	
	printf("%d %d",k,MaxScore);
	
	return 0;
} 
