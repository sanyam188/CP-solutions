#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cout<<"enter no. of elements in first array";
	cin>>n;
	int a[n];
	vector<int>v;
	vector<int>v1;
	cout<<"enter elements";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		v.push_back(a[i]);
	}
	cout<<"enter no. elements in second array";
	cin>>m;
	int b[m];
	cout<<"enter elements";
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
		int l=0;
		for(int j=0;j<n;j++)
		{
			if(b[i]==v[j])
				l++;
		}
		if(l==0)
			v.push_back(b[i]);
	}
	cout<<"union is : "<<"{";
	for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<",";
		}
		cout<<"}";

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(a[i]==b[j])
					v1.push_back(a[i]);

			}
		}
		cout<<"intersection is : "<<"{";
	for(int i=0;i<v1.size();i++)
		{
			cout<<v1[i]<<",";
		}
		cout<<"}";
}