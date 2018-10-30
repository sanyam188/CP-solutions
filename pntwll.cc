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
		ll n,m;
		cin>>n>>m;
		ll h[n];
		ll c[n];
		map<ll,ll>freq;
		for(ll i=0;i<n;i++)
			cin>>h[i];
		for(ll i=0;i<n;i++)
			cin>>c[i];
		ll maxi=h[n-1];
		ll col=c[n-1];
		freq[col]=1;
		for(ll i=n-1;i>=0;i--)
		{
			if(h[i]>maxi)
			{
				maxi=h[i];
				freq[c[i]]++;

			}
		}
		cout<<freq.size()<<"\n";

	}
}