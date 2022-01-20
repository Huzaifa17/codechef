#include<iostream>
#include<map>
using namespace std;

int main()
{
	int i,j,n,t,m,k;
	map<int,int> mp;
	map<int,int> :: iterator it;
	cin>>t;
	for(i=0;i<t;++i)
	{
		mp.clear();
		cin>>n;
		for(j=0;j<n;++j)
		{
			cin>>k;
			mp[k]++;
		}
		int sum=0;
		for(it=mp.begin();it!=mp.end();++it)
		{
			if(it->first-1<it->second)
			{
				sum+=(it->first-1);
			}
			else
			{
				sum+=(it->second);
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
