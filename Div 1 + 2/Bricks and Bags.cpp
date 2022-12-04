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

// ll maxDif = v[n-1] - v[0];


      
//           int dif1 = abs(v[0] - v[1]);
//           int dif2 = abs(v[n-1] - v[n-2]);
//           maxDif += max(dif1 , dif2); 

// cout<<maxDif<<"\n";
ll ans =0;
for(int i=1;i<n;++i)
{
          ll temp = (abs(v[i]-v[i-1] + v[i] -v[0]) );
          ans = max(ans , temp);
}

for(int i=0;i<n-1;++i)
{
           ll temp = abs(v[i+1] - v[i]) + abs(v[i] -v[n-1]);
          ans = max(ans , temp);
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
