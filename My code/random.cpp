#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i;
	cin>>t;	//test cases
	for(int j=0;j<t;j++)
	{
		int n;
		cin>>n;	//no of horses
		int s[n];
		for(i=0;i<n;i++)
		{
			cin>>s[i];	//skills
		}
		{
			int h=sizeof(s)/sizeof(s[0]);
			sort(s,s+h); 	//!sorted
			int diff=INT_MAX;
			for(int i=0;i<n-1;i++)
			if(s[i+1]-s[i]<diff)
			diff=s[i+1]-s[i];
			cout<<diff;
			cout<<endl;
		}

	}
	return 0;
}