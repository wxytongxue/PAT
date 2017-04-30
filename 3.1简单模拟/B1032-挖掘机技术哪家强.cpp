#include<cstdio>
/*
 * 原理： 
 * 1.设置School数组，在输入的时候，学校即编号，将各个学校分数放入School数组 
 * 2.查询一个学校的分数的时间复杂度O(1)的时间(关键是创建School这个数组，利用的是hash原理) 
 * 3.遍历整个 School数组找出分数最高的学校
 
 * 注意：
 * 1.查找最大值得for循环里的开始下标为1，结束标为N 
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
