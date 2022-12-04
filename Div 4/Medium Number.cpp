#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{


 
int a , b , c;
cin>>a>>b>>c;
vector<int>v(3);
v[0] = a ;
v[1] = b;
v[2] = c;
sort(v.begin() , v.end());
cout<<v[1]<<"\n";

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
