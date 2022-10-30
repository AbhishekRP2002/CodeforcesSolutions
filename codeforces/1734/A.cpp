#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{

int n ;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;++i)
{
          cin>>v[i];
}

sort(begin(v) , end(v));

int i= 0 ,j=0 ;
ll ans = INT_MAX;
while(j<n)
{
          if(j-i+1 < 3)
          j++;
          else if( j-i+1 == 3)
          {
                    ll difSum =    abs(v[i+1] - v[i]) + abs(v[i+2] - v[i+1]);
                 
                    ans = min(ans , difSum);
                    j++;
                    i++;
          }
        //   else if(j-i+1 >3)
        //   {
        //             while(j-i+1 > 3)
        //             {
        //                       i++;
        //             }
        //             j++;
        //   }
          
          
          
          
}

cout<<ans<<"\n";

}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;

	while(t--) {
	 
	    solution();
	   
	    }
	return 0;
}
