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
   
   if(n==1)
   {
             cout<<1<<" "<<1<<"\n";
   return;
   }
   else if(n>1)
   {
           cout<<1<<" "<<n<<"\n";
   return;   
   }
   
 
    
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
