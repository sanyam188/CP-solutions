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
		for(ll i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		ll days=1;
		ll l=0;
		ll people=a[1]+1;
		while(days++)
		{ll sum=0;
			for(ll i=1;i<=people;i++)
			{
				if(people>=n)
				{
					l++;
					break;
				}
				else
				{
					sum=sum+a[i];
				}
				people=people+sum;
			}
			//people=people+sum;
			if(l>0)
				break;


		}
		cout<<days-1<<"\n";
	}
}