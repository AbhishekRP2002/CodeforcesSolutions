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
map<int,int>m;
for(auto i:v)
m[i]++;

if(n<=2)
{
          cout<<n<<"\n";
          return;
}
if(m.size()>=3)
cout<<n<<"\n";
else if(m.size()==2)
cout<<(n/2 + 1)<<"\n";

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
