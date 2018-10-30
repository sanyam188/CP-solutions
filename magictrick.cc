#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<pair<string,int>> step;
	int n,l=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string s;
		int k;
		cin>>s>>k;
		step.push_back(make_pair(s,k));
	}
	for(int i=1;i<=100;i++)
	{
		float p=i;
		int m=0;
		for(auto i:step)
		{ // p=(float)i;
			//string s;
			//int k;
			//cout<<s;
			//cin>>s>>k;
			if(i.first=="ADD")
				p=p+i.second;
			if(i.first=="SUBTRACT")
				p=p-i.second;
			if(i.first=="MULTIPLY")
				p=p*i.second;
			if(i.first=="DIVIDE")
				p=p/i.second;
			m=p;
		if(p<0||p-m!=0)
				{l++;
					break;
					
				}
		

		}
		
	}
	cout<<l;
}