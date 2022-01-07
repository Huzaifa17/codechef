#include<iostream>
#include<list>
using namespace std;

void show_list(list<int> lst)
{
	int i,j,k,n,m;
	list<int> ::iterator it3;
	it3=lst.begin();
	for(;it3!=lst.end();++it3)
	{
		cout<<(*it3)<<"->";
	}
	cout<<"null"<<endl;
	return ;
}


int main()
{
	int i,j,k,n,m,t;
	list<int> lst;
	list<int> :: iterator it,it2;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>n;
		for(j=0;j<n;++j)
		{
			string s;
			cin>>s;
			if(s=="I")
			{
				if(lst.empty())
				{
					cout<<"true"<<endl;
				}
				else
				{
					cout<<"false"<<endl;
				}
			}
			else if(s=="AF")
			{
				cin>>k;
				lst.push_front(k);
				show_list(lst);
			}
			else if(s=="AL")
			{
				cin>>k;
				lst.push_back(k);
				show_list(lst);
			}
			else if(s=="RF")
			{
				if(lst.empty())
				{
					cout<<"ListEmptyException"<<endl;
				}
				else
				{
					lst.pop_front();
				}
				show_list(lst);
			}
			else if(s=="RL")
			{
				if(lst.empty())
				{
					cout<<"ListEmptyException"<<endl;
				}
				else
				{
					lst.pop_back();
				}
				show_list(lst);
			}
			else if(s=="L")
			{
				if(lst.empty())
				{
					cout<<"null"<<endl;
				}
				else
				{
					cout<<(*(lst.rbegin()))<<endl;
				}
			}
			else if(s=="F")
			{
				if(lst.empty())
				{
					cout<<"null"<<endl;
				}
				else
				{
					cout<<(*(lst.begin()))<<endl;
				}
			}
			else if(s=="REV")
			{
				lst.reverse();
				show_list(lst);
			}
		}
	}
	return 0;
}
