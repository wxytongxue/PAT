#include<stdio.h>
#include<queue>

using namespace std;

int main()
{
	queue<int> q;
	
	for(int i=0;i<5;i++)
	{
		q.push(i);   //压入数据	
	} 
	
	printf("%d %d\n",q.front(),q.back());  //获取队首和队尾元素
	
	q.pop();  //出队列 
	printf("%d\n",q.front());	
	
	if(q.empty() != true)
	{
		printf("empty\n");
	} 
	
	printf("size:%d\n",q.size());
	
	return 0;
}
