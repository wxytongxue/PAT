#include<cstdio>
/*
 * ԭ�� 
 * 1.������Ӧ�ĸ��� 
 * 2.������ϼ������жϣ��ֱ���һ��һ���� 
 
 * ע�⣺
 * 1.ADrink,BDrink һ��Ҫ��ʼ��Ϊ0 

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
