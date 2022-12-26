#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{
ll n ;
cin>>n;
string s;
cin>>s;
unordered_map<string , int>m;
for(int i = 0;i<n-1;)
{
          if(s.substr(i,2) == s.substr(i+1 ,2))
          {
                     m[s.substr(i,2)]++;
                     i+=2;
                    
          }
          else
          {
                    m[s.substr(i,2)]++;
                    i++;
          }
}

for(auto i:m)
{
          // cout<<i.first<<" "<<"\n";
          if(i.second > 1)
         {
                   puts("YES");
                   return;
         }
}

puts("NO");

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
