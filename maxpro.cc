#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
#define z 1000000007
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll div=n/k;
		ll p=k/2;
		ll a[k];
		for(ll i=0;i<k;i++)
		{
			a[i]=div;
		}
		if(((k*(k+1))/2)>n)
		{
			cout<<"-1"<<"\n";
		}
		//else if(((k*(k+1))/2)==n)
		//{
		//	cout<<"0"<<"\n";
		//}
		else
		{
			for(ll i=0;i<p;i++)
			{
				a[i]=div-p+i;
				a[k-1-i]=div+p-i;
				//cout<<a[i]<<" "<<a[k-1-i]<<"\n";
			}
			//for(ll i=0;i<k;i++)
			//{
			//	cout<<a[i]<<"\n";
			//}
			//return 0;
			if(k%2!=0)
			{
				ll rem=n%k;
				if(rem>0)
				{
					for(ll i=0;i<rem;i++)
					{
						a[k-1-i]++;
					}
				}
			}
			else
			{
				ll rem=n%k;
				if(rem>0)
				{
					for(ll i=0;i<rem;i++)
					{
						if(i<k/2)
						{
							a[k/2-1-i]++;
						}
						else
						{
							ll j=i-k/2;
							a[k-1-j]++;

						}
					}
					
				}
			}
			//for(ll i=0;i<k;i++)
			//{
				//cout<<a[i]<<" ";
			//}
			//if(a[0]==1)
			//	cout<<"0"<<"\n";
			//else
			{
				ll maxpro=1;
				for(ll i=0;i<k;i++)
				{
					//cout<<a[i]<<" ";
					ll pro=a[i]*a[i]-a[i];
					//pro=pro%z;
					maxpro=(maxpro*pro)%z;
					 
				}
				cout<<maxpro%z<<"\n";
			}

		}
	}
}