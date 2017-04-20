#include<stdio.h>
#include<algorithm>

using namespace std;
bool cmp(int a,int b){
		return a>b;         //从达到小顺序排 
	} 
int main()
{
	//max函数
	int x=1,y=3,z=2;
	printf("max:%d\n",max(x,max(y,z)));  //寻找多个数的最大值
	//min同max
	//abs函数取绝对值
	swap(x,y);  //引用版交换值 
	printf("x:%d y:%d",x,y);
	printf("\n");
	//reverse翻转函数
	int a[10] ={10,11,12,13,14,15};
	reverse(a,a+4);    //指定范围进行翻转(根据迭代器) 
	for(int i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	//next_permutation生成全排列 
	int b[3] ={5,6,7};
	do{
		printf("%d %d %d \n",b[0],b[1],b[2]);
	}while(next_permutation(b,b+3));
	 //fill某一区间赋值同一个数 	
	int c[5]={1,2,3,4,5};
	fill(c,c+4,200);
	for(int i=0;i<5;i++)
	{
		printf("%d ",c[i]);
	} 
	printf("\n");
	//sort函数进行排序,cmp比较函数确定比较规则,第二个参数为尾地址的下一个地址 ,默认从小到大顺序 
	int d[5]={4,5,3,8,2};
	 sort(d,d+5);
	 for(int i=0;i<5;i++)
	 {
	 	printf("%d ",d[i]);
	 } 
	 printf("\n");
	// 编写cmp函数
	
	sort(d,d+5,cmp); 
	 for(int i=0;i<5;i++)
	 {
	 	printf("%d ",d[i]);
	 } 
	 
	 int e[10]={1,2,2,3,3,3,5,5,5,5}; 
	 //lower_bound() 数组或容器范围[first,last) 第一个值大于等于val的元素位置（返回指针或迭代器）
	 //lower_bound() 数组或容器范围[first,last) 第一个值大于等于val的元素位置（返回指针或迭代器）
	 int *lowpos = lower_bound(e,e+10,-1);
	 int *upperos = upper_bound(e,e+10,2);
	 
	 printf("\n%d %d\n",(lowpos-e),(upperos-e));
	 
	 
	 
	  
	
	return 0;
}
