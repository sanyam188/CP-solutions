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
		ll n,k;
		cin>>n>>k;
		ll a[n];
		for(ll i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		sort(a+1,a+n+1);
		ll qual=a[n-k+1];
		//map<int,int>teams;
		ll l=0;
		for(ll i=1;i<=n;i++)
			{
				if(a[i]>=qual)
				{
					l++;
				}
			}
			cout<<l<<"\n";
	}
}