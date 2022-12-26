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
std::vector<int> v(n-1 );
string s;
cin>>s;
vector<int>arr(s.length());
int ctr =0;
map<int , int >m;
for(int i=0;i<n-1;++i)
{
          v[i] = s[i] -'0';
          ctr++;
}
bool flag = false;
v[0] =1;
for(int i=1;i<s.length();++i)
{
         m[s[i]-'0']++;
          if(s[i]!=s[i-1])
          {
                    v[i] = i+1;
                    flag = true;
          }
          else
          {
                    v[i] = v[i-1];
                    ctr++;
          }
          
}

for(auto i:v)
cout<<i<<" ";
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
