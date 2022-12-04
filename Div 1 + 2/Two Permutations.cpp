#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{


int n,a,b;
cin>>n>>a>>b;
if(n==1)
{
          puts("Yes");
          return;
}
if(n-(a+b)>=2 or (a==b and b==n))
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
