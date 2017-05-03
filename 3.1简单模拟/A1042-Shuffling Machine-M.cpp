#include<cstdio>
/*
 * 原理： 
 * 1.设置两个存储每个位置存放扑克的初始编号的数组Card1,Card2。在第一遍洗牌的时i即初始编号，之后两个数组相互倒数 
 * 2.每13个数一换前缀，所以用商判断前缀字母，用余数判断后缀数字 
 * 注意：
 * 1.洗牌的次数不同，洗牌的编号顺序放在不同的数组里 
 * 2. 当编号为13的倍数的时候，会出现0编号，字母前缀也会调到下一个，要使余数其等于13，商要减1 
 */ 
int main()
{
	int N,Shuff[55],Card1[55],Card2[55],S,Y,Time=1;
	scanf("%d",&N);
	//input
	for(int i=1;i<=54;i++)
	{
		scanf("%d",&Shuff[i]);
	}
	
	for(int i=0;i<N;i++)
	{
		for(int i=1;i<=54;i++)
		{
			if(Time==1)
			{
				Card1[Shuff[i]]=i;	
			}
			else if(Time%2==0)
			{
				Card2[Shuff[i]]=Card1[i];	
			}
			else
			{
				Card1[Shuff[i]]=Card2[i];
			}			
		}	
		Time++;
	}
	//print
	for(int i=1;i<=54;i++)
	{
		if(N%2==0)
		{
			S=Card2[i]/13;
			Y=Card2[i]%13;	
		}
		else{
			S=Card1[i]/13;
			Y=Card1[i]%13;
		}
		if(Y==0)
		{
			S--;
			Y=13;
		}
		
		switch(S)
		{
			case 0:
				printf("S%d",Y);
				break;
			case 1:
				printf("H%d",Y);
				break;
			case 2:
				printf("C%d",Y);
				break;
			case 3:
				printf("D%d",Y);
				break;
			case 4:
				printf("J%d",Y);
		}
		if(i!=54)
		{
			printf(" ");
		}
	}
	
	return 0;
}
