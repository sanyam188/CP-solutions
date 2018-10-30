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
		ll n;
		cin>>n;
		ll a[n];
		map<ll,ll>freq;
		set<ll>c;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			freq[a[i]]++;
			c.insert(a[i]);
		}
		ll count=0;
		set<ll>::iterator i;
		for( i=c.begin();i!=c.end();i++)
		{
			if(freq[*i]>=freq[freq[*i]] && freq[freq[*i]]>=freq[*i] )
				count++;
		}
		cout<<count<<"\n";

	}

}