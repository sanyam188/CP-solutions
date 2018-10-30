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
		vector<vector<pair<ll,ll>>>knight;
		
		for(ll i=0;i<n;i++)
		{
			vector<pair<ll,ll>>pos;
			ll a,b;
			cin>>a>>b;
			pos.push_back(make_pair(a-2,b-1));
			//knight[i].push_back(pos);
			pos.push_back(make_pair(a-2,b+1));
			pos.push_back(make_pair(a+2,b-1));
			pos.push_back(make_pair(a+2,b+1));
			pos.push_back(make_pair(a-1,b+2));
			pos.push_back(make_pair(a+1,b+2));
			pos.push_back(make_pair(a+1,b-2));
			pos.push_back(make_pair(a-1,b-2));
			//for(ll j=0;j<8;j++)
				knight.push_back(pos);
			

		}
		//cout<<knight.size();
		ll a,b;
		cin>>a>>b;
		vector<pair<ll,ll>>king;
		//for(ll i=0;i<8;i++)
		//{
			king.push_back(make_pair(a-1,b-1));
			king.push_back(make_pair(a-1,b));
			king.push_back(make_pair(a-1,b+1));
			king.push_back(make_pair(a,b-1));
			king.push_back(make_pair(a,b));
			king.push_back(make_pair(a,b+1));
			king.push_back(make_pair(a+1,b-1));

			king.push_back(make_pair(a+1,b));
			king.push_back(make_pair(a+1,b+1));
			
		//}
		ll count=0;
		ll sum;
		for(ll k=0;k<9;k++)
		{
			for(ll i=0;i<n;i++)
			{
				 sum=0;
				for(ll j=0;j<8;j++)
				{
					
					if(king[k].first==knight[i][j].first && king[k].second==knight[i][j].second)
					{
						count++;
						sum++;
						//cout<<count<<" "<<k<<i<<j<<"\n";
						//continue;
						break;
					}
				}
				if(sum>0)
					//{
					//	k=k+1;
						break;
					//}

			}

		}
		//cout<<count;
		if(count==9)
			cout<<"YES"<<"\n";
		else
			cout<<"NO"<<"\n";
	}
}