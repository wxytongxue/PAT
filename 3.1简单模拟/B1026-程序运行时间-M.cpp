#include<cstdio>
/*
 * 原理： 
 * 1.先利用节拍数，对秒进行四舍五入 
 * 2.将节拍转换成秒   
 * 3.对秒进行计算得到小时、分钟、秒
 
 * 注意：
 * 1.先四舍五入再转换成秒 
 * 2.输出要用lld
 * 3.输出要加%02 符合规定的格式 
 */  
int main()
{
	long long C1,C2,Second;
	scanf("%lld%lld",&C1,&C2);
	Second = (C2-C1);
	if(Second%100>=50){
		Second = Second/100 +1;	
	}
	else{
		Second = Second/100;
	}
	printf("%02lld:%02lld:%02lld",(Second/3600),((Second%3600)/60),(Second%60));
	
	return 0;
} 
