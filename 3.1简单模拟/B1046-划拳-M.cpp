#include<cstdio>
/*
 * 原理： 
 * 1.输入相应四个数 
 * 2.输入完毕即进行判断，分别判一等一不等 
 
 * 注意：
 * 1.ADrink,BDrink 一定要初始化为0 

 */  
int main()
{
	int N,ASay,BSay,AHand,BHand,ADrink=0,BDrink=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%d%d%d%d",&ASay,&AHand,&BSay,&BHand);
		if((AHand==ASay+BSay)&&(BHand != ASay+BSay))
		{
			BDrink++;
		}
		else if((AHand!=ASay+BSay)&&(BHand == ASay+BSay))
		{
			ADrink++;
		}
		
	}
	
	printf("%d %d",ADrink,BDrink);
	return 0;
}
