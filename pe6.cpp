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

int main()
{
	int a=0,b=0;
	for(int i=1;i<=100;i++)
	{
		a+=i*i;
		b+=i;
	}
	b*=b;
	cout<<abs(a-b);
	return 0;
}
