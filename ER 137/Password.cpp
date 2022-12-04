#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{

int n;
cin>>n;
std::vector<int>v(n,0) ;
for(int i=0;i<n;++i)
{
          cin>>v[i];
}

int x = 10 -n;

long long int ans =(( x*(x-1) )/2)*6;
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
