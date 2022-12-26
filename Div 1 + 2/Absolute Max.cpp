#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define M 998244353





void solution() 
{

 
int n ;
cin>>n;
std::vector<int> v(n);
for(int i=0;i<n;++i)
cin>>v[i];
ll maxm = v[0] ;
ll minm = maxm;
map<int , int>m;
int ctr = minm;
for(auto i:v)
{
      maxm |= i;
      minm &= i;
      ctr+=minm;
      m[i]++;
}

cout<<maxm - minm<<"\n";
         
 }


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
   ll t;
   cin>>t;
   while(t--)
   solution();
	   
	  
	return 0;
}
