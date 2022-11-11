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

int minm = INT_MAX;
for(int i=0;i<n-1;++i)
{
          if(v[i]<=minm)
          minm = v[i];
}
int maxm = 0;
for(int i=1;i<n;++i)
{
          if(v[i]>=maxm)
          maxm = v[i];
}

int adjDif = 0;

for(int i=1;i<n;++i)
{
          int diff = (v[i-1] - v[i]);
          adjDif = max(adjDif , diff);
}

int ans = max(maxm - v[0] ,max( v[n-1] - minm , adjDif));
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
