#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{

int n , m ,k;
cin>>n>>m>>k;
std::vector<int> a(n) ;
for(int i= 0;i<n;++i)
cin>>a[i];

int r = m-1 , l = m-1 , diff1 = INT_MAX, diff2 = INT_MAX;
int ans = INT_MAX;
for(int i = r;i<n;++i)
{
      if(a[i] <= k and a[i]!=0)
      {
          diff1 = (i-r)*10;    
          break;
      }
      
}
for(int i= l ;i>=0 ;i--)
{
        if(a[i] <= k and a[i]!=0)
        {
                  diff2 = (l-i)*10;
                  break;
                  
        }
}

ans = min(diff2 , diff1);
cout<<ans<<"\n";



}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
// 	ll t;
// 	cin>>t;

// 	while(t--) {
	 
	    solution();
	   
//	  }
	return 0;
}
