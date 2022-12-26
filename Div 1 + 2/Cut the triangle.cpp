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

  ll x1 , y1 , x2 , y2 , x3 , y3;
  cin>>x1>>y1>>x2>>y2>>x3>>y3;
//   if((x1==x2 and x2==x3 and x3==x1) or (y1==y2 and y2==y3 and y3 == y1))
//   {
//             puts("NO");
//             return;
//   }
  if(checkRightAngle(x1 , y1 , x2 , y2 , x3 , y3)  )
  {
        if( (x1==x2 or x2==x3 or x3==x1) and (y1==y2 or y2==y3 or y3 == y1))
        {
                  puts("NO");    
        return;
        }
  }
 
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
