#include<stdio.h>
#include<stack>

using namespace std;

int main()
{
	stack<int> sk;
	
	for(int i=0;i<5;i++)
	{
		sk.push(i);      //ѹջ 
	}
	printf("top:%d\n",sk.top());
	sk.pop();  //��ջ
	printf("top:%d\n",sk.top());
	printf("size:%d\n",sk.size());  //ջ��С 
	if(sk.empty() != true)  //�ж��Ƿ�Ϊ��ջ 
	{
		printf("not empty!\n");
	} 
		
	return 0;
	
}
