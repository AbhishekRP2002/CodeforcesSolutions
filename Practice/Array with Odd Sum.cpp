
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

// if(n==1)
// cout<<0<<"\n";

int cntOdd = 0;
for(auto i:v)
{
          if(i%2!=0)
          cntOdd++;
}

if(cntOdd%2!=0 )
{
          puts("YES");
          return;
}
else
{
          if(n>cntOdd and cntOdd>0)
          {
                    puts("YES");
                    return;
          }
}

puts("NO");
return;
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
