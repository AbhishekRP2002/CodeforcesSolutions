#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{
           ll n;
       
        cin >> n;
vector<ll>v(n);
for(ll i=0;i<n;++i)
{
          cin>>v[i];
}

sort(v.begin() , v.end());

ll s1 =0 , s2 =0 , ans = 0;
// if(v[0]<0)
// {
          // s2 = 0;
          // s1 = accumulate(v.begin() , v.end() , 0);
          // ans = max( ans , (abs(s1)-abs(s2)));
          // for(int i=0;i<n;++i)
          // {
                
                
          //       s2 += v[i] ;
          //       s1 -= v[i]; 
          //       ans = max( ans , abs(abs(s1)-abs(s2)));
               
             
          // }
          
// }
// else
// {
//           s2 = 0;
//           s1 = accumulate(v.begin() , v.end() , 0);
//           ans = s1;
// }

// if(v[0]<0)
// {
//           for(int i=0;i<n;++i)
//           {
//                   if(v[i]<0)
//                     s2 += v[i];
//                     else
//                     s1+=v[i];
                    
//           }
//            ans = max(ans , abs(abs(s1)-abs(s2)));
          
         
// }
// else
// {
//           s2 = 0;
//           s1 = accumulate(v.begin() , v.end() , 0);
//           ans = s1;
// }
for(ll i=0;i<n;++i)
ans+=v[i];
cout<<abs(ans)<<"\n";






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
