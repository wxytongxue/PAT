#include<stdio.h>
#include<map>

using namespace std;

int main()
{
	
	map<char,int>mp;
	
	mp['c']=20;
	mp['c']=30; //覆盖20
	mp['a']=10;
	mp['b']=40;
	//下标遍历 
	printf("%d\n",mp['c']); 
	//迭代器遍历
	for(map<char,int>::iterator it = mp.begin();it != mp.end();it++)
	{
		printf("%c %d\n",it->first,it->second);
	} 
	
	return 0;
} 
