#include<cstdio>
/*
 * ԭ�� 
 * 1.�ֱ����A��B�ĸ�λ�����A(B)ĳһλ��Da(Db)��ȣ��ͽ���λ���ŵ�Pa(Pb)��β�� 
 * 2.��Pa��Pb��� 
 
 * ע�⣺
 * 1.A,B��10^10 ��ֻ����long long  
 * 2.��Ϊ�п���A(B)�Ĵ��λ(����int�ܱ�ʾ��λ��)����Da(Db)��ȣ�����Pa��PbҲ����ʹ��long long 
 */  


int main()
{
	
	long long A,B,Pa=0,Pb=0;
	int Da,Db;
	
	scanf("%lld%d%lld%d",&A,&Da,&B,&Db);
	while(A != 0)
	{
		if(Da == A%10)
		{
			Pa = Pa*10+Da;
		}
		A/=10; 
	}
	while(B != 0)
	{
		if(Db == B%10)
		{
			Pb = Pb*10+Db;
		}
		B/=10;
	}
	
	printf("%lld\n",(Pa+Pb));
	return 0;
}
