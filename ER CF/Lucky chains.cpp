#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{
ll x , y;
cin>>x>>y;

if( (y-x) == 1)
{
          cout<<-1<<"\n";
          return;
}


  if(gcd(y ,x) != 1)
  {
            cout<<0<<"\n";
  }
  else if(gcd(y ,x) == 1)
  {
            if( ((y-x) & 1) == 0) // both odd but diff is even
            {
                      cout<<1<<"\n";
            }
            else if( ((y-x) & 1) != 0)
            {
                      int ctr = 0;
                      while(gcd( x , y ) == 1)
                      {
                                x++;
                                y++;
                                ctr++;
                      }
                      
                      cout<<ctr<<"\n";
            }
            
      
  
  
}


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
