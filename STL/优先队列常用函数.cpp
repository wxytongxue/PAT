#include<stdio.h>
#include<queue>

using namespace std;

int main()
{
	priority_queue<int> q;
	
	//队首为优先级最大的元素（m默认按照优先级排序） 
	q.push(2);
	q.push(4);
	q.push(1);
	 
	printf("%d\n",q.top()); //获取优先队列队首元素 
	q.pop(); //出队列 
	printf("%d\n",q.top());
	if(q.empty()!=true)  //判断优先队列是否为空 
	{
		printf("empty!\n");
	}
	
	printf("%d\n",q.size()); //检测优先队列的大小 
		
	
	return 0;
}
