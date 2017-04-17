#include<iostream>
#include<queue>
#include<string>
using namespace std;

struct fruit{
		string name;
		int price;
		
		friend bool operator < (fruit f1,fruit f2){  
			return f1.price<f2.price;              //�����>�򣬼۸���С��Ϊ���ȼ���� 
		} 
	}f1,f2,f3; 
	
int main()
{
	//�����������Ͱ� 
	priority_queue<int,vector<int>,less<int> > q1;  //���ִ�����ȼ���
	priority_queue<int,vector<int>,greater<int> >q2; //����С�����ȼ���
	
	q1.push(2);
	q1.push(4);
	q1.push(1);
	
	q2.push(2);
	q2.push(4);
	q2.push(1);
	
	cout<<"q1:"<<q1.top()<<endl;
	cout<<"q2:"<<q2.top()<<endl;
	 
	//�����������Ͱ�
	
	priority_queue<fruit> q3;
	f1.name = "ƻ��";
	f1.price = 12;
	f2.name = "��";
	f2.price = 11;
	f3.name = "��ݮ";
	f3.price = 13;
	
	q3.push(f1);
	q3.push(f2);
	q3.push(f3);
	
	cout<<"name:"<<q3.top().name<<"price:"<<q3.top().price<<endl; 
		
	return 0;
}
