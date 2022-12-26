#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define M 998244353

bool checkRightAngle(ll X1, ll Y1,
                      ll X2, ll Y2,
                      ll X3, ll Y3)
{
    // Calculate the sides
    ll A = (ll)pow((X2 - X1), 2)
            + (ll)pow((Y2 - Y1), 2);
 
    ll B = (ll)pow((X3 - X2), 2)
            + (ll)pow((Y3 - Y2), 2);
 
    ll C = (ll)pow((X3 - X1), 2)
            + (ll)pow((Y3 - Y1), 2);
 
    // Check Pythagoras Formula
    if ((A > 0 and B > 0 and C > 0) and (A == (B + C) or B == (A + C) 
                  or C == (A + B)))
       return true;
 
   return false;
}

void solution()
{

 int n ;
 cin>>n;
 int m , k;
 cin>>m>>k;
 std::vector<int>v(m) ;
 for(int i=0;i<m;++i)
 cin>>v[i];
 
 int maxm = *max_element(v.begin() , v.end());
 
 if( k*1LL*maxm > (n+k-1)*1LL)
 puts("NO");
 else
 puts("YES");
 
 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll t;
	cin>>t;

	while(t--) {
	 
	    solution();
	   
	  }
	return 0;
}
