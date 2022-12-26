#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define ll long long int
#define pb push_back
#define mp make_pair
#define fo(i,n) for((int)i=0;i<n;i++)
#define M 1e9+7



void solution() 
{
int n, k;
cin>>n>>k;

vector<ll> v(n);
for(int i=0;i<n;++i){
    cin>>v[i];
}
int queries[k][2] = {0};

vector<ll>pref_arr(n ,0);
sort(v.begin()  , v.end() );


// Input queries


for(int i=0;i<k;++i)
{
          int l, r;
          cin>>l>>r;
          l-- , r--;
          pref_arr[l]++;
          if(r!=n-1) pref_arr[r+1]--;
          

}

for(int i=1;i<n;++i)
pref_arr[i] += pref_arr[i-1];

sort(pref_arr.begin() , pref_arr.end());



ll sum = 0;
ll total_sum = accumulate(v.begin() , v.end() , 0LL);
int ind = 0;
while(n--){


    sum += (pref_arr[ind] * v[ind]);
    ind++;
}
 
cout<<sum<<endl;
         
 }


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


   
//    ll t;
//    cin>>t;
//    while(t--)
   solution();
	   
	  
	return 0;
}
