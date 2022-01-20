#include<iostream>
#include<cstring>
#include<unordered_map>
#include<vector>
using namespace std;

int main()
{
	int i,j,k,n,m,t;
	cin>>t;
	unordered_map<string,vector<string>> mp;
	unordered_map<string,vector<string>> ::iterator it,it2;
	unordered_map<string,int> mp2;
	for(i=0;i<t;++i)
	{
		cin>>n;
		//int arr[n]={0};
		mp.clear();
		mp2.clear();
		vector<string> s;
		for(j=0;j<n;++j)
		{
			string s1,s2;
			cin>>s1>>s2;
			mp[s1].push_back(s2);
			mp2[s1]++;
			s.push_back(s1);
		}
		for(j=0;j<n;++j)
		{
			//vector<string> &v=it->second;
			it=mp.find(s[j]);
			vector<string> &v=it->second;
			cout<<it->first;
			if(mp2[it->first]>1)
			{
				cout<<" "<<v[0];
				v.erase(v.begin());
			}
			cout<<endl;
		}
	}
	return 0;
}
