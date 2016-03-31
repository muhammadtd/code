/*
   In The Name Of GOD
   Code Prepared by me! (Muhamad Taghi Dabaghha -> -mtd- )
   version:1.0
   */
#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define ll long long
#define int long long

using namespace std;
const int inf=~0u/2;
const long long linf=~0ull/2;
const int mod=1e9+7;

const int maxn=1e3+20;
int a[maxn];

main()
{
	for(int i=0;i<1e3;i++)
	{
		char ch;
		cin>>ch;
		a[i]=ch-'0';
	}
	int m=0;
	for(int i=0;i<1e3-13+1;i++)
	{
		int r=1;
		for(int j=0;j<13;j++)
		{
			r*=a[i+j];
		}
		m=max(m,r);
	}
	cout<<m;
	return 0;
}
