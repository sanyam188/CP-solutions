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
		ll k;
		cin>>k;
		string s;
		cin>>s;
		//ll n =s.length();
		sort(s.begin(),s.end());
		ll l=0;
		ll sum=0;
			for(long long int j=0;j<=k;j++)
		{
			sum=0;
			for(long long int m=j;m<=k;k++)
			{
			
				sum=sum+(s[m]-96);
				if(sum==k)
				{
					l++;
					
				}
			}
		}
		cout<<l<<"\n";
	}
}