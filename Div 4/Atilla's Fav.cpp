#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{


 
int n;
cin>>n;
string s;
cin>>s;
priority_queue<int>pq;

for(auto i:s)
pq.push(i-'a');

cout<<pq.top() + 1<<"\n";

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
