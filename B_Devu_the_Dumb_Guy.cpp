#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define ll long long int
#define pb push_back
#define mp make_pair
#define fo(i,n) for(i=0;i<n;i++)
#define M 1e9+7





void solution() 
{

 ll n , k;
 cin>>n>>k;
 vector<ll> v(n);
 int i;
 fo(i,n) cin>>v[i];

 ll sum = 0;
 sort(v.begin(),v.end());

 fo(i,n)
 {
    if(k >1)
    {
        sum += v[i]*k;
        k--;
    }
    else if(k==1)
    {
        sum+=v[i];
    }
 }

      cout<<sum<<"\n";   
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
