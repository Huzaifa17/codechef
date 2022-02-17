#include<bits/stdc++.h>
using namespace std;

#define MX 100001
int parent[MX];
int size[MX];

void make(int n)
{
	for(int i=1;i<=n;++i)
	{
		parent[i]=i;
		size[i]=1;
	}
}

int find(int u)
{
	if(parent[u]==u)
	{
		return u;
	}
	return parent[u]=find(parent[u]);
}

void Union(int u,int v)
{
	int p=find(u);
	int q=find(v);
	if(p!=q)
	{
		if(size[p]<size[q])
		{
			swap(p,q);
		}
		parent[q]=p;
		size[p]+=size[q];
	}
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,j,k,m,t,a,b;
	cin>>n>>k;
	make(k);
	for(i=0;i<k;++i)
	{
		cin>>t>>a>>b;
		if(t==0)
		{
			Union(a,b);
		}
		else
		{
			if(find(a)==find(b))
			{
				cout<<"Yes"<<endl;
			}
			else
			{
				cout<<"No"<<endl;
			}
		}
	}
	return 0;
}
