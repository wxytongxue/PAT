#include<cstdio>
/*
 * ԭ�� 
 * 1.�������������жϴ�С��Ȼ�����Greater������
 * 2.Greater�����±꼴����������ţ�ֵ1Ϊ���ڣ�ֵ0ΪС�ڵ��� 
 
 * ע�⣺
 * 1.���������ʱ�򣬴��±�1��ʼ����T����
 * 2.��Ϊ������[-2^31, 2^31]����int�ܱ�ʾ�ķ�ΧΪ[-2^31,2^31-1]�����ֱ��������֮����Ӷ����ܳ�����Χ������Ҫ��long long int���� 
 */  

int main()
{
	long long A,B,C;
	int T,Greater[20];
	
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
		scanf("%lld%lld%lld",&A,&B,&C);
		if(A+B>C)
		{
			Greater[i+1]=1;
		}
		else{
			Greater[i+1]=0;
		}
		
	}
	
	for(int i=1;i<=T;i++)
	{
		if(Greater[i]==1)
		{
			printf("Case #%d: true\n",i);
		}
		else
		{
			printf("Case #%d: false\n",i);
		}
	}	
	return 0;
}
