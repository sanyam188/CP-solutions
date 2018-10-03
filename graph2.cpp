#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	vector<pair<int,int>>nodes[n];
	ll val[n];
	for(ll i=1;i<=n;i++)
	{
		cin>>val[i];
	}
	ll a,b;
	for( ll i=1;i<=m;i++)
	{
		//ll a,b;
		cin>>a>>b;
		nodes[a].pb(mp(val[b],b));
		nodes[b].pb(mp(val[a],a));

	}
	for(ll i=1;i<=n;i++)
	{
		sort(nodes[i].begin(),nodes[i].end());
	}

	for( ll i=1;i<=n;i++)
	{
		ll p=nodes[i].size();
		if(k<=p)
		{
			cout<<nodes[i][p-k].second<<"\n";

		}
		else
			cout<<"-1"<<"\n";
	}


}
