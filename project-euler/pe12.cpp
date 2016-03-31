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
	bool b=1;
	int s=0;
	for(int i=1;b;i++)
	{
		s+=i;
		int d=0;
		for(int j=1;j*j<=s;j++)
		{
			if(s%j==0)
				d+=2;
			if(j*j==s)
				d--;
		}
		if(d>500)
			b=0;
	}
	cout<<s;
	return 0;
}
