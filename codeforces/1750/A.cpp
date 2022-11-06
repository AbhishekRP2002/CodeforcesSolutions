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

if(v[0]==1)
puts("YES");
else
puts("NO");



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
