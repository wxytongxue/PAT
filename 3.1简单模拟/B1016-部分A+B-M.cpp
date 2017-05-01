#include<cstdio>
/*
 * 原理： 
 * 1.分别遍历A和B的各位，如果A(B)某一位与Da(Db)相等，就将该位数放到Pa(Pb)的尾部 
 * 2.将Pa和Pb相加 
 
 * 注意：
 * 1.A,B＜10^10 ，只能用long long  
 * 2.因为有可能A(B)的大多位(超过int能表示的位数)都和Da(Db)相等，所以Pa，Pb也必须使用long long 
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
