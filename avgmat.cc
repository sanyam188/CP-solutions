#include<iostream>
#include <bits/stdc++.h>
typedef short ll;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		map<ll,ll>freq;
		ll n,m;
		cin>>n>>m;
		char a[n][m];
		ll minx=0,miny=0,maxx=0,maxy=0;
		ll count=0;
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<m;j++)
			{
				cin>>a[i][j];
				if(a[i][j]=='1')
				{
					count++;
					if(count==1)
						{
							minx=i;
							miny=j;
						}
						maxx=i;
						maxy=j;
				}

			}
		}
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<m;j++)
			{
				//ll ele=a[i][j];
				if(a[i][j]=='1')
				{ a[i][j]='0';
				for(ll k=0;k<n;k++)
				{
					for(ll l=0;l<m;l++)
					{
						if(a[k][l]=='1')
						{
							ll d=abs(k-i)+abs(l-j);
							//cout<<d<<"\n";
							if(d!=0)
							freq[d]++;
						}


					}
				}
				}

			}
		}
		//cout<<freq.size()<<"\n";
		for(ll i=1;i<=(n+m-2);i++)
		{
			cout<<freq[i]<<" ";
		}
		cout<<"\n";
	}
}