#include<stdio.h>
#include<queue>

using namespace std;

int main()
{
	queue<int> q;
	
	for(int i=0;i<5;i++)
	{
		q.push(i);   //ѹ������	
	} 
	
	printf("%d %d\n",q.front(),q.back());  //��ȡ���׺Ͷ�βԪ��
	
	q.pop();  //������ 
	printf("%d\n",q.front());	
	
	if(q.empty() != true)
	{
		printf("empty\n");
	} 
	
	printf("size:%d\n",q.size());
	
	return 0;
}
