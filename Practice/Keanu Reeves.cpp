#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{


 
   int n;
   cin>>n;
string s;
cin>>s;
if(s.length()==1)
{
          cout<<1<<"\n";
          cout<<s<<"\n";
          
}
else
{
          cout<<2<<"\n";
          string str1 = s.substr(0 , s.length()-1);
          string str2 = s.substr(n-1 ,1);
          cout<<str1<<" "<<str2<<"\n";
}
    
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
// 	int t;
// 	cin>>t;

// 	while(t--) {
	 
	    solution();
	   
	  //  }
	return 0;
}
