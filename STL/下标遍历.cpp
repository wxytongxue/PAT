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
	
	for(int i=0;i<5;i++)
	{
		printf("%d\n",vi[i]);
	}
	return 0;
	
} 
