#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{
ll n ;
cin>>n;
string s = to_string(n);
ll len = s.length();

// int firstnum = stoi(s[0]);
int cntZeroes = len - 1;



if(cntZeroes==0)
cout<<n<<"\n";
else if(cntZeroes > 0)
{
          int temp = n/(pow(10 ,cntZeroes));
          cout<<cntZeroes*9 + temp<<"\n";
}



}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll t;
	cin>>t;

	while(t--) {
	 
	    solution();
	   
	  }
	return 0;
}
