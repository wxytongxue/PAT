#include<stdio.h>
#include<algorithm>

using namespace std;
bool cmp(int a,int b){
		return a>b;         //�ӴﵽС˳���� 
	} 
int main()
{
	//max����
	int x=1,y=3,z=2;
	printf("max:%d\n",max(x,max(y,z)));  //Ѱ�Ҷ���������ֵ
	//minͬmax
	//abs����ȡ����ֵ
	swap(x,y);  //���ð潻��ֵ 
	printf("x:%d y:%d",x,y);
	printf("\n");
	//reverse��ת����
	int a[10] ={10,11,12,13,14,15};
	reverse(a,a+4);    //ָ����Χ���з�ת(���ݵ�����) 
	for(int i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	//next_permutation����ȫ���� 
	int b[3] ={5,6,7};
	do{
		printf("%d %d %d \n",b[0],b[1],b[2]);
	}while(next_permutation(b,b+3));
	 //fillĳһ���丳ֵͬһ���� 	
	int c[5]={1,2,3,4,5};
	fill(c,c+4,200);
	for(int i=0;i<5;i++)
	{
		printf("%d ",c[i]);
	} 
	printf("\n");
	//sort������������,cmp�ȽϺ���ȷ���ȽϹ���,�ڶ�������Ϊβ��ַ����һ����ַ ,Ĭ�ϴ�С����˳�� 
	int d[5]={4,5,3,8,2};
	 sort(d,d+5);
	 for(int i=0;i<5;i++)
	 {
	 	printf("%d ",d[i]);
	 } 
	 printf("\n");
	// ��дcmp����
	
	sort(d,d+5,cmp); 
	 for(int i=0;i<5;i++)
	 {
	 	printf("%d ",d[i]);
	 } 
	 
	 int e[10]={1,2,2,3,3,3,5,5,5,5}; 
	 //lower_bound() �����������Χ[first,last) ��һ��ֵ���ڵ���val��Ԫ��λ�ã�����ָ����������
	 //lower_bound() �����������Χ[first,last) ��һ��ֵ���ڵ���val��Ԫ��λ�ã�����ָ����������
	 int *lowpos = lower_bound(e,e+10,-1);
	 int *upperos = upper_bound(e,e+10,2);
	 
	 printf("\n%d %d\n",(lowpos-e),(upperos-e));
	 
	 
	 
	  
	
	return 0;
}
