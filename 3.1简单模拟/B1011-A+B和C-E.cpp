#include<cstdio>
/*
 * 原理： 
 * 1.通过while循环使用T--来代替for循环 
 * 2.输入完成三个数即进行判断并输出结果 
 
 * 注意：
 * 1.是T--,不是--T,如果是--T就循环他、T-1次 
 * 2.因为区间是[-2^31, 2^31]，而int能表示的范围为[-2^31,2^31-1]，数字本身或数字之间相加都可能超出范围，所以要用long long int类型 
 * 3.tcase是tcase++，而不是++tcase 
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











