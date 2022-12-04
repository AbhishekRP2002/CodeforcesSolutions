#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{

int n;
cin>>n;
std::vector<ll>v(n,0);
for(int i=0;i<n;++i)
{
          cin>>v[i];
}

sort(v.begin() , v.end());
for(int i=0;i<n-1;++i)
{
          if(v[i] >= v[i+1])
          {
                    cout<<"NO"<<"\n";
                    return;
          }
}

cout<<"YES"<<"\n";

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
