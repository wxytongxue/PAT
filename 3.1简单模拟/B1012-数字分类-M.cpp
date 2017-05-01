#include<cstdio>
/*
 * 原理： 
 * 1.输入即判断，A数组存放各自结果 
 * 2.A数组相应位置的值是否为0判断是否有该类数字(第二类除外) 
 * 3.第三类格外拿出来输出 
 * 4.最后一类拿出来格外输出 
 * 注意：
 * 1.第二类不符合A[1]为0就判断该类没数字！！
 * 2.第三类要进行类型转换 
 */ 
int main()
{
	int N,ans,n1=1,n2=0;
	int A[5]={0};
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%d",&ans);
		switch(ans%5)
		{
			case 0:
				if(ans%2 == 0)
				{
					A[0]+=ans;
				}
				break;
			case 1:
				if(n1%2==1)
				{
					A[1]+=ans;
					n1++;
				}
				else{
					A[1]-=ans;
					n1++;
				}
				break;
			case 2:
					A[2]++;
				break;
			case 3:
					A[3]+=ans;
					n2++;
				break;
			case 4:
					if(ans>A[4])
					{
						A[4]=ans;
					}
				break;
		}
	}
	
	for(int i=0;i<5;i++)
	{
		if(A[i]==0&&(i!=1||n1==1))
		{
			printf("N");
		}
		else if(i==3)
		{
			printf("%0.1f",((double)A[3])/n2);
		}
		else{
			printf("%d",A[i]);
		}
		if(i!=4)
		{
			printf(" ");
		}
	}	
	return 0;
} 
