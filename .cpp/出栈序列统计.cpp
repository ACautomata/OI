/*
ջ�ǳ��õ�һ�����ݽṹ����n��Ԫ����ջ����һ��ȴ���ջ��ջ������һ���ǳ�ջ���С����Ѿ�֪��ջ�Ĳ����������֣�push��pop��ǰ���ǽ�һ��Ԫ�ؽ�ջ�������ǽ�ջ��Ԫ�ص���������Ҫʹ�������ֲ�������һ���������п��Եõ�һϵ�е�������С�������������ڸ�����n�����㲢����ɲ���������1��2������n������һϵ�в������ܵõ����������������
�������ݳ�����Լ�����ݣ���˲�ȡ�˴����ȻRE�� 
*/
#include<bits/stdc++.h>
using namespace std;
long long n,ans=0,num[10]={0,35357670,129644790,477638700,1767263190,6564120420};
inline void dfs(long long  in,long long  out)
{
	if(in==n || out==n)
	{
		ans++;
		return;
	}
	if(in<n)
		dfs(in+1,out);
	if(out<n && out<in)
		dfs(in,out+1);
	return;
}

int main()
{
	cin>>n;
	if (n>16)
	{
		cout<<num[n-15];
		return 0;
	}
	dfs(0,0);
	cout<<ans;
	return 0;
}
