#include<stdio.h>
#include<vector>

using namespace std;

int main()
{
	vector<int> vi;
	for(int i=0;i<5;i++)
	{
		vi.push_back(i);
	}
	//ֻ����it��=vi.end ��֧��it<vi.end()  
	for(vector<int>::iterator it = vi.begin();it != vi.end();it++)
	{
		printf("%d\n",*it);
	}
	
	return 0;
}
