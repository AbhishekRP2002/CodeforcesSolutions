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
 string s;
 cin>>s;
 
 int cnt1 = 0;
 for(auto i:s)
 {
           if(s[i]=='1')
           cnt1++;
 }
 
 vector<char>ans(n-1);
 
bool flag = false;
 for(int i=1;i<n;++i)
 {
            if(s[i] == '0')
           cout<<'+';
           else if(s[i] == '1')
           {
                     if(flag==false)
                     {
                               cout<<'-';
                               flag = true;
                     }
                     else
                     {
                               cout<<'+';
                               flag = false;
                     }
                     
           }
 }
 
 cout<<"\n";
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
