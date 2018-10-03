#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cout<<"enter no. of elements in first array";
	cin>>n;
	char a[n];
	cout<<"enter elements of first array";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter no. of elements in second array";
	cin>>m;
	char b[m];
	cout<<"enter elements in second array";
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	cout<<"cross product elemnts are";
	cout<<"{";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<"("<<a[i]<<","<<b[j]<<")"<<",";
		}
	}
}