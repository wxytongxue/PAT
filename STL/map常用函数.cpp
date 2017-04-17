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
	//map���Զ����ռ�ֵ�������� 
	map<char,int>::iterator it = mp.find('b');   //find������Ѱ�Ҽ�ֵ  ���ص����� 
	printf("find:%c %d\n",it->first,it->second);
	
	for(map<char,int>::iterator it = mp.begin();it!= mp.end();it++)
	{
		printf("%c %d\n",it->first,it->second);
	} 
	mp.erase(mp.find('a'));  //���ݵ�����ɾ��ָ��Ԫ�� 
	printf("ɾ����:\n");	
	for(map<char,int>::iterator it = mp.begin();it!= mp.end();it++)
	{
		printf("%c %d\n",it->first,it->second);
	} 
	mp.erase('c');  //���ݼ�ֵɾ��Ԫ��
	printf("ɾ����:\n");
	 for(map<char,int>::iterator it = mp.begin();it!= mp.end();it++)
	{
		printf("%c %d\n",it->first,it->second);
	} 
	
	mp.erase(mp.find('d'),mp.end());  //ɾ��ָ���������ֵ 
	printf("ɾ����:\n");
	 for(map<char,int>::iterator it = mp.begin();it!= mp.end();it++)
	{
		printf("%c %d\n",it->first,it->second);
	}
	
	printf("size:%d\n",mp.size()); 
	
	mp.clear();  //�������Ԫ��
	
	printf("after clear size:%d",mp.size()); 
	
	return 0;
}
