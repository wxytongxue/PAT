#include<stdio.h>
#include<vector>

using namespace std;

int main()
{
	vector<int> vi;
	
	for(int i=0;i<5;i++)
	{
		vi.push_back(i);   //尾部添加元素 
	}
	
	for(vector<int>::iterator it = vi.begin();it != vi.end();it++)
	{
		printf("%d\n",*it);
	} 
	
	for(int i=0;i<2;i++)
	{
		vi.pop_back();   //删除尾部元素 
	}
	
	for(vector<int>::iterator it = vi.begin();it != vi.end();it++)
	{
		printf("%d\n",*it);
	} 
	
	printf("size:%d\n",vi.size());  //容器长度，返回unsigned类型
	
	vi.clear();  //清除所有元素 
	 
	printf("size:%d\n",vi.size());
		
	vi.insert(vi.begin()+0,9);  //开头加 
	vi.insert(vi.begin()+1,7);  //只能插入到已存在的范围内 
	vi.insert(vi.end(),6);  //末尾追加
	vi.insert(vi.begin()+1,5); //指定位置前 
	vi.insert(vi.begin(),2,1); //指定位置加入指定个数的指定整元素 
	
	for(vector<int>::iterator it = vi.begin();it != vi.end();it++)
	{
		printf("%d ",*it);
	} 
	
	printf("\n"); 
	vi.erase(vi.begin());  //删除指定位置的单个元素 
		for(vector<int>::iterator it = vi.begin();it != vi.end();it++)
	{
		printf("%d ",*it);
	} 
	vi.erase(vi.begin(),vi.begin()+2); //删除指定区间的元素 [first,last)
	printf("\n"); 
	vi.erase(vi.begin());  //删除指定位置的单个元素 
		for(vector<int>::iterator it = vi.begin();it != vi.end();it++)
	{
		printf("%d ",*it);
	}
	
	return 0;
}
