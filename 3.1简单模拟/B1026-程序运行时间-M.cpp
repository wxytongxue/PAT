#include<cstdio>
/*
 * ԭ�� 
 * 1.�����ý���������������������� 
 * 2.������ת������   
 * 3.������м���õ�Сʱ�����ӡ���
 
 * ע�⣺
 * 1.������������ת������ 
 * 2.���Ҫ��lld
 * 3.���Ҫ��%02 ���Ϲ涨�ĸ�ʽ 
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
