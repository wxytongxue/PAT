#include<stdio.h>
#include<vector>
using namespace std;

int main()
{
	vector<int> vi;
	
	for(int i=0;i<5;i++)
	{
		vi.push_back(i);    //β��ѹ������ 
	}
	
	vector<int>::iterator it = vi.begin();   //������
	
	for(int i=0;i<5;i++)
	{
		printf("%d\n",*(it+i));
	} 
	
	return 0;
} 
