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
	int n,s=0;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		if(i%3==0||i%5==0)
			s+=i;
	}
	cout<<s;
	return 0;
}
