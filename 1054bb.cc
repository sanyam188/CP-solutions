#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	ll l=0,flag=0;
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	ll max=a[1];
	if(max!=0)
		l++;
	for(ll i=1;i<=n;i++)
	{

		if(a[i]-max>1)
			l++;
		if(max<a[i])
			max=a[i];
		if(l>0)
		{
			flag =i;
			break;
		}
	}
	if(l>0)
		cout<<flag;
	else
		cout<<"-1";
}