#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter  no. of elements of array";
	cin>>n;
	int a[n];
	cout<<"enter elements";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"powerset are";
	cout<< "{null},";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"{"<<i+1<<","<<j+1<<"}"<<",";
		}
	}
	cout<<"{";
	for (int i=0;i<n;i++)
	{
		cout<<i+1<<",";
	}
	cout<<"}";

}