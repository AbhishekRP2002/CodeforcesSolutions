#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{


 
   int n;
   cin>>n;
   vector<int> v(n); //already sorted 
 
   for(int i=0; i<n; i++) {
      cin>>v[i];
      
   }
   
//   if((v[n-1]%v[0])==0)
//   {
//             cout<<v[n-1]/v[0]<<"\n";
//             return;
//   }
//   else
  //{
        int temp = v[0];
        
        for(auto i:v)
        {
                  temp = __gcd(i , temp);
        }
        if(temp==1)
        {
                  cout<<v[n-1]<<"\n";
        
                  return;
        }
        else
        {
                  cout<<v[n-1]/temp<<"\n";
                  return;
        }
            
 // }
  
 
    
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
