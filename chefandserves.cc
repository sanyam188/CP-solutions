#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++)
	{
		ll a,b,c;
		cin>>a>>b>>c;
		ll d=a+b;
		ll e=d/c;
		if(e%2==0)
			cout<<"CHEF"<<"\n";
		else
			cout<<"COOK"<<"\n";
	}
}