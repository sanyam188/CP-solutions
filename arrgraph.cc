#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
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
		ll d=a[0];
		
		ll b[n];
		for(ll i=0;i<n;i++)
		{
			b[i]=a[i];

		}
			ll changes=0;
		sort(b,b+n);
		ll l=0,m=0,p=0;
		for(ll i=0;i<n;i++)
		{
			//if(gcd(b[i],b[i+1])!=1)
			//	{
			//		count++;
			//		b[i+1]=b[i]+1;
			//		a[i+1]=b[i+1];
			if(a[i]!=47)
			{
				l++;
				m=i;
			}
			if(a[i]==47)
			{
				p++;
			}

			//	}
		ll count=0;
			for(ll j=0;j<n;j++)
			{
				if(gcd(b[j],b[i])!=1)
					{
						count++;
						if(count==n)
							{
								//cout<<count;
								changes++;
							}
					}
			}
			//if(count==n)
			//	changes++;
			//if(changes==n)
			//	changes--;
			if(l==n && changes>0)
			{
				a[m]=47;
			}
			if(p==n)
				a[0]=2;


		}
		if(n==1)
		{
			cout<<"0"<<"\n";
			cout<<d<<"\n";
		}

		else
		{
		if(changes>0)
		cout<<"1"<<"\n";
	else
		cout<<"0"<<"\n";
		for(ll i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
	}
}