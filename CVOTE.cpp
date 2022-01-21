#include<iostream>
#include<map>
#include<cstring>
using namespace std;

int main()
{
	int i,j,k,n;
	string s1,s2;
	map<string,int> mp,mp2;
	map<string,string> mp3;
	cin>>n>>k;
	for(i=0;i<n;++i)
	{
		cin>>s1>>s2;
		mp[s1]=0;
		mp2[s2]=0;
		mp3[s1]=s2;
	}
	for(i=0;i<k;++i)
	{
		cin>>s1;
		mp[s1]++;
		mp2[mp3[s1]]++;
	}
	map<string,int> ::iterator it;
	int sum=0;
	for(it=mp.begin();it!=mp.end();++it)
	{
		if(it->second>sum)
		{
			s1=it->first;
			sum=it->second;
		}
	}
	sum=0;
	for(it=mp2.begin();it!=mp2.end();++it)
	{
		if(it->second>sum)
		{
			s2=it->first;
			sum=it->second;
		}
	}
	cout<<s2<<endl;
	cout<<s1<<endl;
	return 0;
}
