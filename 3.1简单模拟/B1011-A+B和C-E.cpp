#include<cstdio>
/*
 * ԭ�� 
 * 1.ͨ��whileѭ��ʹ��T--������forѭ�� 
 * 2.��������������������жϲ������� 
 
 * ע�⣺
 * 1.��T--,����--T,�����--T��ѭ������T-1�� 
 * 2.��Ϊ������[-2^31, 2^31]����int�ܱ�ʾ�ķ�ΧΪ[-2^31,2^31-1]�����ֱ��������֮����Ӷ����ܳ�����Χ������Ҫ��long long int���� 
 * 3.tcase��tcase++��������++tcase 
 */  

int main()
{
	int T, tcase=1;
	long long int a,b,c;
	scanf("%d",&T);
	
	while(T--)
	{
		scanf("%lld%lld%lld",&a,&b,&c);
		
		if(a+b>c)
		{
			printf("Case #%d: true\n",tcase++);
		}
		else
		{
			printf("Case #%d: false\n",tcase++);
		}
	}
	return 0;
}











