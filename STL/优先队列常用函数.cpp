#include<stdio.h>
#include<queue>

using namespace std;

int main()
{
	priority_queue<int> q;
	
	//����Ϊ���ȼ�����Ԫ�أ�mĬ�ϰ������ȼ����� 
	q.push(2);
	q.push(4);
	q.push(1);
	 
	printf("%d\n",q.top()); //��ȡ���ȶ��ж���Ԫ�� 
	q.pop(); //������ 
	printf("%d\n",q.top());
	if(q.empty()!=true)  //�ж����ȶ����Ƿ�Ϊ�� 
	{
		printf("empty!\n");
	}
	
	printf("%d\n",q.size()); //������ȶ��еĴ�С 
		
	
	return 0;
}
