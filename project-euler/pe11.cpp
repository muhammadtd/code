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

const int maxn=30;
int a[maxn][maxn];

main()
{
	for(int i=1;i<=20;i++)
		for(int j=1;j<=20;j++)
			cin>>a[i][j];
/*	for(int i=1;i<=20;i++)
	{
		for(int j=1;j<=20;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}*/
	int m=0;
	for(int i=1;i<=20;i++)
	{
		for(int j=1;j<=20;j++)
		{
			if(i+3<=20&&j+3<=20)
				m=max(m,a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3]);
			if(i+3<=20&&j-3>=0)
				m=max(m,a[i][j]*a[i-1][j+1]*a[i-2][j+2]*a[i-3][j+3]);
			if(i-3>=0&&j+3<=20)
				m=max(m,a[i][j]*a[i-1][j+1]*a[i-2][j+2]*a[i-3][j+3]);
			if(i+3<=20)
				m=max(m,a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j]);
			if(j+3<=20)
				m=max(m,a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3]);
		}
	}
	cout<<m;
	return 0;
}
