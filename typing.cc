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
		string s[n];
		for(ll i=0;i<n;i++)
		{
			cin>>s[i];

		}
		ll total=0;
		for(ll i=0;i<n;i++)
		{
			string str=s[i];
			char a=str[0];
			ll len=str.length();
			ll t=0;
			ll count=1;
			//string c="ee";
			//if(s[i]!=c)
			//{
			for(ll j=0;j<len;j++)
			{
				if(str[j]=='f'||str[j]=='d')
				{
					if(str[j+1]=='f'||str[j+1]=='d')
						t=t+4;
					else
						t=t+2;
					
				}
				if(str[j]=='j'||str[j]=='k')
				{
					if(str[j+1]=='j'||str[j+1]=='k')
						t=t+4;
					else
						t=t+2;
					
				}
			}
		//	}
			//else
			//{
			for(ll j=i+1;j<n;j++)
			{
				if(s[i]==s[j] && s[i]!="ee")
				{
					count++;
					s[j]="ee";
					//cout<<count<<"\n";
				}
			}
		//}
			//cout<<t<<"\n";
		if(count>1)
			t=t+(count-1)*(t/2);
		//cout<<t<<"\n";
		total=total+t;
			
		}
		cout<<total<<"\n";
	}
}