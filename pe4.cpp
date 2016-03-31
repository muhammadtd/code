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

bool palindrome(int a)
{
	string s="";
	while(a>0)
	{
		s+='0'+a%10;
		a/=10;
	}
	string str=s;
	reverse(s.begin(),s.end());
	if(s==str)
		return 1;
	else
		return 0;
}

int main()
{
	int m=0;
	for(int i=100;i<1000;i++)
		for(int j=100;j<1000;j++)
			if(palindrome(i*j))
				m=max(m,i*j);
	cout<<m;
	return 0;
}
