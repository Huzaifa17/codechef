#include<bits/stdc++.h>
using namespace std;

long long int parent[10001];
//int size[10001];

void init(int n)
{
	for(int i=0;i<=n;++i)
	{
		parent[i]=i;
		//size[i]=1;
	}
}

long long int find(long long int u)
{
	if(u==parent[u])
	{
		return u;
	}
	return parent[u]=find(parent[u]);
}

void Union(long long int u,long long int v)
{
	long long int p=find(u);
	long long int q=find(v);
	if(p!=q)
	{
		parent[q]=p;
	}
	return ;
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	long long int n,i,j,k,m,t,a,b;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>n;
		init(n);
		long long int arr[n+1];
		for(j=1;j<=n;++j)
		{
			cin>>arr[j];
		}
		long long int q;
		cin>>q;
		for(j=0;j<q;++j)
		{
			cin>>k;
			if(k==0)
			{
				cin>>a>>b;
				a=find(a);
				b=find(b);
				if(a==b)
				{
					cout<<"Invalid query!"<<endl;
				}
				else if(arr[a]>arr[b])
				{
					Union(a,b);
				}
				else if(arr[a]<arr[b])
				{
					/*cout<<"A: "<<a<<" "<<b<<endl;
					cout<<arr[a]<<" "<<arr[b]<<endl;
					cout<<"parent: "<<find(a)<<" "<<find(b)<<endl;*/
					Union(b,a);
				}
			}
			else
			{
				cin>>a;
				cout<<find(a)<<endl;
			}
		}
	}
	return 0;
}
