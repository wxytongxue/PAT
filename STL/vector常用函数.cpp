#include<stdio.h>
#include<vector>

using namespace std;

int main()
{
	vector<int> vi;
	
	for(int i=0;i<5;i++)
	{
		vi.push_back(i);   //β�����Ԫ�� 
	}
	
	for(vector<int>::iterator it = vi.begin();it != vi.end();it++)
	{
		printf("%d\n",*it);
	} 
	
	for(int i=0;i<2;i++)
	{
		vi.pop_back();   //ɾ��β��Ԫ�� 
	}
	
	for(vector<int>::iterator it = vi.begin();it != vi.end();it++)
	{
		printf("%d\n",*it);
	} 
	
	printf("size:%d\n",vi.size());  //�������ȣ�����unsigned����
	
	vi.clear();  //�������Ԫ�� 
	 
	printf("size:%d\n",vi.size());
		
	vi.insert(vi.begin()+0,9);  //��ͷ�� 
	vi.insert(vi.begin()+1,7);  //ֻ�ܲ��뵽�Ѵ��ڵķ�Χ�� 
	vi.insert(vi.end(),6);  //ĩβ׷��
	vi.insert(vi.begin()+1,5); //ָ��λ��ǰ 
	vi.insert(vi.begin(),2,1); //ָ��λ�ü���ָ��������ָ����Ԫ�� 
	
	for(vector<int>::iterator it = vi.begin();it != vi.end();it++)
	{
		printf("%d ",*it);
	} 
	
	printf("\n"); 
	vi.erase(vi.begin());  //ɾ��ָ��λ�õĵ���Ԫ�� 
		for(vector<int>::iterator it = vi.begin();it != vi.end();it++)
	{
		printf("%d ",*it);
	} 
	vi.erase(vi.begin(),vi.begin()+2); //ɾ��ָ�������Ԫ�� [first,last)
	printf("\n"); 
	vi.erase(vi.begin());  //ɾ��ָ��λ�õĵ���Ԫ�� 
		for(vector<int>::iterator it = vi.begin();it != vi.end();it++)
	{
		printf("%d ",*it);
	}
	
	return 0;
}
