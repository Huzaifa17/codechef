#include<bits/stdc++.h>
using namespace std;
long long int b_search2(long long n)
{
	long long left,right,mid,i,j,k=0;
	left=0,right=1000000001;
	while(left<=right)
	{
		mid=(left+right)/2;
		if((mid*(mid+1))<=(2*n))
		{
			k=mid;
			left=mid+1;
		}
		else
		{
			right=mid-1;
		}
	}
	return k;
}

int main()
{
	long long int i,j,k,n,m,t;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>n;
		cout<<b_search2(n)<<endl;
	}
	return 0;
}
