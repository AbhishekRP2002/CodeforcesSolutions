#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{


 
   int n;
   cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;++i)
 {
           cin>>v[i];
 }
 
 sort(v.begin() , v.end());
 int ans = 1;
 for(int i=0;i<n;++i)
 {
           if((n-i) <= v[i])
           ans = max(ans , n-i);
           
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
