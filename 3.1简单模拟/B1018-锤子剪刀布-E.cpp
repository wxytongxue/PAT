#include<cstdio>
/*
 * 原理： 
 * 1.将 C J B 按字母顺序排列，正好循环一圈，前一个大于后一个 
 * 2.change用于将字符转换为下标数
 * 3.Max用于找到次数最多的字符 
 
 * 注意：
 * 1. getchar() 先吞掉\n 
 * 2. canf("%c %c",&A,&B); 中间有空格的写法 
 * 3. 取余%的合理使用 
 */  
int change(char c)
{
	if(c=='B')
	return 0;
	if(c=='C')
	return 1;
	if(c=='J')
	return 2;
}
char Max(int temp[])
{
	char mp[3]={'B','C','J'};
	int num,Max=-1;
	for(int i=0;i<3;i++)
	{
		if(temp[i]>Max)
		{
			num=i;
			Max=temp[i];
		}
	}
	return mp[num];
}
int main()
{
	int N,k1,k2,AS=0,BS=0;
	int AN[3]={0};
	int BN[3]={0};
	char A,B;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		getchar();
		scanf("%c %c",&A,&B);
		k1=change(A);
		k2=change(B);
		if((k1+1)%3==k2)
		{
			AS++;
			AN[k1]++;
		}
		else if(k1 == k2)
		{
			
		}
		else
		{
			BS++;
			BN[k2]++;
		}
		
	}
	printf("%d %d %d\n",AS,N-AS-BS,BS);
	printf("%d %d %d\n",BS,N-AS-BS,AS);
	printf("%c %c",Max(AN),Max(BN));

	return 0;
}
