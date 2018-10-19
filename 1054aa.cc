#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ll x,y,z,t1,t2,t3;
	cin>>x>>y>>z>>t1>>t2>>t3;
	ll stairs=abs(x-y)*t1;
	ll ele=abs(z-x)*t2+3*t3+abs(y-x)*t2;
	if(ele<=stairs)
		cout<<"yes";
	else
		cout<<"no";
}