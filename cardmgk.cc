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
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		ll count=0;
		ll mini=0;
		
			for(ll i=0;i<n-1;i++)
			{
				if(a[i+1]<a[i])
				{
					count++;

				}
			}
			if(count>=2||((a[0]<a[n-1]) &&(count>0) ))
				cout<<"NO"<<"\n";
			else
				cout<<"YES"<<"\n";
		

	}
}