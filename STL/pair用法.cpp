#include<iostream>
#include<utility>
//�����map�Ͳ��õ���utility 
using namespace std;

int main(){
	
	//pairʵ����������Ԫ�صĽṹ�� 
	pair<string,int> pl;
	pl.first = "haha";
	pl.second = 22;
	cout<<"first:"<<pl.first<<"-second:"<<pl.second<<endl;
	
	//���ú���
	 pair<int,int> p1(5,10);
	 pair<int,int> p2(5,15);
	 pair<int,int> p3(10,5);
	 //�ȽϺ��� 
	 if(p1<p3)
	 {
		cout<<"p1<p3"<<endl;
	 }
	 if(p1<=p3)
	 {
	 	cout<<"p1<=p3"<<endl;
	 }
	 if(p1<p2)
	 {
	 	cout<<"p1<p2"<<endl;
	 }
	 if(p2<p3)
	 {
	 	cout<<"p2<p3"<<endl;
	 }
	 
	
	return 0;
}
