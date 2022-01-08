#include<iostream>
#include<list>
using namespace std;

int main()
{
	int i,j,n,m,k,t;
	list<int> lst,lst2,lst3;
	list<int> :: iterator it,it2,it3;
	cin>>n;
	for(i=1;i<=(2*n);++i)
	{
		cin>>k;
		lst.push_back(k);
	}
	int sum=lst.front();
	it=lst.begin();
	for(i=1;i<=n-1;++i)
	{
		it++;
		it++;
		lst2.push_back(sum+(*it));
		sum=(*it);
	}
	it=lst.begin();
	it++;
	sum=(*it);
	for(i=1;i<=n-1;++i)
	{
		it++;
		it++;
		lst3.push_back(sum+(*it));
		sum=(*it);
	}
	int mid=lst.front()+lst.back();
	it=lst.begin();
	it2=lst2.begin();
	for(i=2;i<=n;++i,++it2)
	{
		it++;
		lst.insert(it,(*it2));
	}
	it++;
	lst.insert(it,mid);
	it3=lst3.begin();
	for(i=n+2;i<=(2*n);++i,++it3)
	{
		it++;
		lst.insert(it,(*it3));
	}
	for(it2=lst2.begin(),i=1;i<=n-1;++i,it2++)
	{
		if(i==1)
		{
			cout<<(*it2);
		}
		else
		{
			cout<<" "<<(*it2);
		}
	}
	cout<<endl;
	for(it3=lst3.begin(),i=1;i<=n-1;++i,it3++)
	{
		if(i==1)
		{
			cout<<(*it3);
		}
		else
		{
			cout<<" "<<(*it3);
		}
	}
	cout<<endl;
	cout<<mid<<endl;
	for(it=lst.begin(),i=1;it!=lst.end();++i,it++)
	{
		if(i==1)
		{
			cout<<(*it);
		}
		else
		{
			cout<<" "<<(*it);
		}
	}
	cout<<endl;
	cout<<lst.size()<<endl;
	return 0;
}
