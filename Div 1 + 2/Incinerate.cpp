#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define M 998244353





void solution() 
{

 
int n ,k ;
cin>>n>>k;
std::vector<int> v(n); // h--> v
for(int i=0;i<n;++i)
cin>>v[i];
ll maxm = v[0] ;
ll minm = maxm;
map<int , int>m;
int ctr =0;
  vector<int> arr(n); // arr ---> p
 
    for(int i=0; i<n; i++)  // pq-->minh
    cin>>arr[i];
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    
    
    int ans=k; // ans---->res
    for(int i=0; i<n; i++)
    pq.push({arr[i],v[i]});
    
    ll sum  = 0;
    for(auto i:arr)
    sum+=i;
    
    
    int cnt=0; // cnt-->ctr
    
    for(auto i:v)
    sum+=i;
   while(k>0 and (pq.size()!=0))
   {
             
      while(pq.size()!=0 and pq.top().second <= ans) 
      pq.pop();
      cnt++;
      auto x = pq.top();
      k -= x.first;
      m[k]++;
      ans+=k;
      ctr+=2;
      
   }
   if(!pq.size()) 
   puts("YES");
   else 
   puts("NO");
         
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
