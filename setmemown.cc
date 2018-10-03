#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter no. of elements";
	cin>>n;
	int a[n];
	cout<<"enter elements";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int m,l=0;
	cout<<"enter member to check";
	cin>>m;
	for(int i=0;i<n;i++)
	{
		if(m==a[i])
		{
			cout<<"it is a member";
			break;

		}
		else
			l++;
	}
	if(l==n)
		cout<<"it is not a member";
}