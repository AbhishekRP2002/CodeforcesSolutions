#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{


int a , b , c;
cin>>a>>b>>c;
int ans = 0;
while(b >= 1 and c >= 2)
     {
               ans+=3;
               b = b-1;
               c = c-2;
     }


     while(a >= 1 and b >= 2)
     {
               ans+=3;
               a = a-1;
               b = b-2;
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
