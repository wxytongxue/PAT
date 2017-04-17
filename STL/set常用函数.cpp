#include<stdio.h>
#include<set>

using namespace std;

int main()
{
	set<int> st;
	
	for(int i=0;i<5;i++)
	{
		st.insert(i);  //插入数据 
	}
	
	for(set<int>::iterator it = st.begin();it!=st.end();it++)
	{
		printf("%d ",*it);   //遍历打印 
	}
	printf("\n");
	set<int>::iterator it = st.find(2);
	printf("%d\n",*it); 
	printf("%d\n",*(st.find(2)));  //另一种打印方法	
	
	//两种删除方式 
	st.erase(st.find(2));
	st.erase(3);    
	for(set<int>::iterator it = st.begin();it!=st.end();it++)
	{
		printf("%d ",*it);   //遍历打印 
	}
	printf("\n");
	
	st.erase(st.find(1),st.end());  //删除一个区间的元素 
	for(set<int>::iterator it = st.begin();it!=st.end();it++)
	{
		printf("%d ",*it);   //遍历打印 
	}
	printf("\n");
	
	printf("size:%d\n",st.size());  //set容器大小 
	st.clear();
	printf("size:%d\n",st.size());
	
	return 0;
}
