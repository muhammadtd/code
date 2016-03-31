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

int lcm(int a,int b)
{
	int t=__gcd(a,b);
	return t?(a/t*b):0;
}

int main()
{
	int r=1;
	for(int i=1;i<=20;i++)
	{
		r=lcm(r,i);
	}
	cout<<r;
	return 0;
}
