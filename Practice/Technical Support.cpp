#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{

int n ;
cin>>n;
vector<char>v(n);
for(int i=0;i<n;++i)
cin>>v[i];
stack<char>s;

int cntQ = 0 , cntA = 0;
for(auto i:v)
{
          if(i=='Q')
         s.push(i);
         else if(i=='A')
         {
                   if(!s.empty())
                   s.pop();
                  
         }
}

if(s.empty())
puts("Yes");
else
puts("No");

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
