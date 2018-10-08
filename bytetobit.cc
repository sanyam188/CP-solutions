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
		ll n;
		cin>>n;
		ll a=(n-1)/26;
		ll s=pow(2,a);
		ll r=(n)%26;
		if(r<=2 && r>0)
			cout<<s<<" "<<"0"<<" "<<"0"<<"\n";
		else if(r>2 && r<=10)
			cout<<"0"<<" "<<s<<" "<<"0"<<"\n";
		else
			cout<<"0"<<" "<<"0"<<" "<<s<<"\n";
	}
}