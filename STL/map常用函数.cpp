#include<stdio.h>
#include<map>

using namespace std;

int main()
{
	map<char,int> mp;
	
	mp['a']=1;
	mp['b']=2;
	mp['c']=3;
	mp['d']=4;
	mp['e']=5;
	//map会自动按照键值进行排序 
	map<char,int>::iterator it = mp.find('b');   //find函数，寻找键值  返回迭代器 
	printf("find:%c %d\n",it->first,it->second);
	
	for(map<char,int>::iterator it = mp.begin();it!= mp.end();it++)
	{
		printf("%c %d\n",it->first,it->second);
	} 
	mp.erase(mp.find('a'));  //根据迭代器删除指定元素 
	printf("删除后:\n");	
	for(map<char,int>::iterator it = mp.begin();it!= mp.end();it++)
	{
		printf("%c %d\n",it->first,it->second);
	} 
	mp.erase('c');  //根据键值删除元素
	printf("删除后:\n");
	 for(map<char,int>::iterator it = mp.begin();it!= mp.end();it++)
	{
		printf("%c %d\n",it->first,it->second);
	} 
	
	mp.erase(mp.find('d'),mp.end());  //删除指定区间里的值 
	printf("删除后:\n");
	 for(map<char,int>::iterator it = mp.begin();it!= mp.end();it++)
	{
		printf("%c %d\n",it->first,it->second);
	}
	
	printf("size:%d\n",mp.size()); 
	
	mp.clear();  //清除所有元素
	
	printf("after clear size:%d",mp.size()); 
	
	return 0;
}
