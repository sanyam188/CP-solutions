#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll decide(ll x, ll a[] ,ll n)
{
	ll sum=0;
	for(ll i=0;i<n;i++)
	{
		sum=sum+(a[i]-x)*(a[i]-x);
	}
	return (sum);
}
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
		sort(a,a+n);
		ll low=a[0];
		ll high=a[n-1];
		ll result=0;
		while(low<=high)
		{
			ll mid=low+(high-low)/2;
			ll c=decide(mid,a,n);
			ll b=decide(mid-1,a,n);
			if(c<b)
			{
				low=mid+1;
				result=mid;
			}
			else
			{
				high=mid-1;
				result=mid;
			}
		}
		cout<<result<<"\n";
		

	}
}