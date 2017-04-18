#include<iostream>
#include<utility>
//如果有map就不用导入utility 
using namespace std;

int main(){
	
	//pair实际是有两个元素的结构体 
	pair<string,int> pl;
	pl.first = "haha";
	pl.second = 22;
	cout<<"first:"<<pl.first<<"-second:"<<pl.second<<endl;
	
	//常用函数
	 pair<int,int> p1(5,10);
	 pair<int,int> p2(5,15);
	 pair<int,int> p3(10,5);
	 //比较函数 
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
