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
//#define int long long

using namespace std;
const int inf=~0u/2;
const long long linf=~0ull/2;
const int mod=1e9+7;

const int maxn=1e7+20;
bool vis[maxn];

int main()
{
	for(int i=2;i<maxn;i++)
	{
		if(!vis[i])
		{
			for(int j=2;j*i<maxn;j++)
			{
				vis[j*i]=1;
			}
		}
	}
	int r=0;
	for(int i=2;i<maxn;i++)
	{
		if(!vis[i])
			r++;
		if(r==10001&&!vis[i])
			cout<<i<<endl;
	}
	return 0;
}
