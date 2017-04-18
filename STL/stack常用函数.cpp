#include<stdio.h>
#include<stack>

using namespace std;

int main()
{
	stack<int> sk;
	
	for(int i=0;i<5;i++)
	{
		sk.push(i);      //Ñ¹Õ» 
	}
	printf("top:%d\n",sk.top());
	sk.pop();  //³öÕ»
	printf("top:%d\n",sk.top());
	printf("size:%d\n",sk.size());  //Õ»´óÐ¡ 
	if(sk.empty() != true)  //ÅÐ¶ÏÊÇ·ñÎª¿ÕÕ» 
	{
		printf("not empty!\n");
	} 
		
	return 0;
	
}
