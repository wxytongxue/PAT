#include<cstdio>
/*
 * 原理： 
 * 1.输入三个数后即判断大小，然后存入Greater数组中
 * 2.Greater数组下标即输入用例编号，值1为大于，值0为小于等于 
 
 * 注意：
 * 1.遍历输出的时候，从下标1开始，到T结束
 * 2.因为区间是[-2^31, 2^31]，而int能表示的范围为[-2^31,2^31-1]，数字本身或数字之间相加都可能超出范围，所以要用long long int类型 
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
