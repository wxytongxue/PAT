#include<stdio.h>
#include<set>

using namespace std;

int main()
{
	set<int> st;
	
	for(int i=0;i<5;i++)
	{
		st.insert(i);  //�������� 
	}
	
	for(set<int>::iterator it = st.begin();it!=st.end();it++)
	{
		printf("%d ",*it);   //������ӡ 
	}
	printf("\n");
	set<int>::iterator it = st.find(2);
	printf("%d\n",*it); 
	printf("%d\n",*(st.find(2)));  //��һ�ִ�ӡ����	
	
	//����ɾ����ʽ 
	st.erase(st.find(2));
	st.erase(3);    
	for(set<int>::iterator it = st.begin();it!=st.end();it++)
	{
		printf("%d ",*it);   //������ӡ 
	}
	printf("\n");
	
	st.erase(st.find(1),st.end());  //ɾ��һ�������Ԫ�� 
	for(set<int>::iterator it = st.begin();it!=st.end();it++)
	{
		printf("%d ",*it);   //������ӡ 
	}
	printf("\n");
	
	printf("size:%d\n",st.size());  //set������С 
	st.clear();
	printf("size:%d\n",st.size());
	
	return 0;
}
