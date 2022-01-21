#include<iostream>
#include<vector>
#include<cstring>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main()
{
	int i,j,k,n,m,t;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>n;
		unordered_map<string,long long> mp;
		unordered_map<string,long long> ::iterator it;
		vector<long long > v;
		//long long sum=0;
		string s;
		for(j=0;j<(3*n);++j)
		{
			cin>>s>>k;
			mp[s]=mp[s]+k;
		}
		for(it=mp.begin();it!=mp.end();++it)
		{
			v.push_back(it->second);
		}
		sort(v.begin(),v.end());
		for(j=0;j<v.size();++j)
		{
			if(j==0)
			{
				cout<<v[j];
			}
			else
			{
				cout<<" "<<v[j];
			}
		}
		cout<<endl;
	}
	return 0;
}
