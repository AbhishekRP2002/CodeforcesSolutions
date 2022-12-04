#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{


 
   int n;
   cin>>n;
   if(n%2==0)//even 
   {
             int temp = n/2;
             if(temp%2==0)
             cout<<0<<"\n";
             else
             cout<<1<<"\n";
   }
   else
   {
             int temp = n/2;
             if(temp%2==0)
             cout<<1<<"\n";
             else
             cout<<0<<"\n";
   }
 
    
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
// 	int t;
// 	cin>>t;

// 	while(t--) {
	 
	    solution();
	   
// 	    }
	return 0;
}
