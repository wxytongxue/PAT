#include<stdio.h>
#include<map>

using namespace std;

int main()
{
	
	map<char,int>mp;
	
	mp['c']=20;
	mp['c']=30; //����20
	mp['a']=10;
	mp['b']=40;
	//�±���� 
	printf("%d\n",mp['c']); 
	//����������
	for(map<char,int>::iterator it = mp.begin();it != mp.end();it++)
	{
		printf("%c %d\n",it->first,it->second);
	} 
	
	return 0;
} 
