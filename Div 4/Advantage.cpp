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
cin>>v[i];
vector<int>temp(v);
sort(begin(temp) , end(temp));
int maxm = temp[n-1];
for(auto i:v)
{
          if(i<maxm)
          cout<<i-maxm<<" ";
          else if(i==maxm)
          cout<<maxm - temp[n-2]<<" ";
}
cout<<"\n";

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
