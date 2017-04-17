#include<iostream>
#include<queue>
#include<string>
using namespace std;

struct fruit{
		string name;
		int price;
		
		friend bool operator < (fruit f1,fruit f2){  
			return f1.price<f2.price;              //如果是>则，价格最小的为优先级最大 
		} 
	}f1,f2,f3; 
	
int main()
{
	//基本数据类型版 
	priority_queue<int,vector<int>,less<int> > q1;  //数字大的优先级大
	priority_queue<int,vector<int>,greater<int> >q2; //数字小的优先级大
	
	q1.push(2);
	q1.push(4);
	q1.push(1);
	
	q2.push(2);
	q2.push(4);
	q2.push(1);
	
	cout<<"q1:"<<q1.top()<<endl;
	cout<<"q2:"<<q2.top()<<endl;
	 
	//复合数据类型版
	
	priority_queue<fruit> q3;
	f1.name = "苹果";
	f1.price = 12;
	f2.name = "梨";
	f2.price = 11;
	f3.name = "草莓";
	f3.price = 13;
	
	q3.push(f1);
	q3.push(f2);
	q3.push(f3);
	
	cout<<"name:"<<q3.top().name<<"price:"<<q3.top().price<<endl; 
		
	return 0;
}
