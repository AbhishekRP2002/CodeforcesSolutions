#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{

ll r , g , b;
cin>>r>>g>>b;
vector<ll>v(3);
v[0] = r;
v[1] = g;
v[2] = b;
sort(v.begin() , v.end());
long long int maxDays = 0;
// if(v[1] == v[2])
// {
//           maxDays = v[1] + (v[0]/2);
      
// }
// else if(v[1]!=v[2])
// {
//           int  diffTemp = v[2] - v[1];
   
//           if(diffTemp >= v[0])
//           {
//                     maxDays = v[1] + v[0];
                  
//           }
//           else
//           {
//                     maxDays = v[2];
//           }
// }
 
//  cout<<maxDays<<"\n";  
//}

maxDays = (v[0]+ v[1] + v[2])/2;
maxDays = min( maxDays , v[0] + v[1]);
maxDays = min( maxDays , v[1] + v[2]);
maxDays = min( maxDays , v[2] + v[0]);
cout<<maxDays<<"\n";
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
