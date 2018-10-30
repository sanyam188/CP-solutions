#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m,k,l;
		cin>>n>>m>>k>>l;
		ll a[n];
		priority_queue <int, vector<int>, greater<int> > pq;
		for(ll i=0;i<n;i++)
		{
			 ll b;
			 cin>>b;
			 pq.push(b); 
		}
		//sort(a,a+n);
		//queue<ll>time;
		//for(ll i=0;i<n;i++)
		//{
	//		time.push(a[i]);
	//	}
		ll ans=0;
		ll i=0;
		ll mintime=INT_MAX;
		ll p=0;
		while(i<=k)
		{
			if(mintime>=(m+1)*l -p)
				{
					mintime=(m+1)*l-p;
					//cout<<mintime<<"\n";
				}
			if(i%l==0 && i>0)
				{
					m--;
					p=0;
				}
				//cout<<"m"<<m<<"\n";
			
			if(i==pq.top() && pq.size()>0)
			{
				m++;
				//cout<<"time"<<time.front()<<"\n";
				pq.pop();
			}
			p++;





			i++;
		}
		cout<<mintime<<"\n";
	}
}