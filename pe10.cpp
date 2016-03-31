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


const int maxn=2e6+20;
bool vis[maxn];

int main()
{
	for(int i=2;i<maxn;i++)
		if(!vis[i])
			for(int j=2;j*i<maxn;j++)
				vis[i*j]=1;
	long long int s=0;
	for(int i=2;i<=maxn-20;i++)
		if(!vis[i])
			s+=i;
	cout<<s;
	return 0;
}
