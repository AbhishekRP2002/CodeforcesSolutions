#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{


 
   int n;
   cin>>n;
   vector<int> v(n);
 
   for(int i=0; i<n; i++) {
      cin>>v[i];
      
   }
   
    for(int i= 0;i<n;++i)
    {
              if(v[i]==0)
              {
                        v[i] = 1;
                        break;
              }
    }
    
    int cnt = 0 , cnt1 = 0;
    for(auto i:v)
    {
              if(i==0)
              cnt++;
              else
              cnt1++;
    }
    int ans = 0;
    
    if(cnt==0)
    {
              cout<<cnt1-1<<"\n";
                     return;
    }
    else
    {
   
        for(int i=n-1;i>=0;--i)
        {
                  if(v[i]==0)
                  {
                            ans+=cnt1;
                  }
                  else if(v[i]==1)
                  {
                            cnt1--;
                  }
        }
              
    }
    
   if(v[n-1]==0)
   cout<<ans<<"\n";
   else
   cout<<ans+1<<"\n";
    
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
