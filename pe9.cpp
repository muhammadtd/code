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
	for(int i=1;i<=1000;i++)
		for(int j=1;j<=1000;j++)
			for(int k=1;k<=1000;k++)
				if(i+j+k==1000)
				{
					if(i*i+j*j==k*k||i*i+k*k==j*j||j*j+k*k==i*i)
						cout<<i*j*k<<endl;
				}
	return 0;
}
