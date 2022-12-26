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
vector<int>v(n);
int i = 0;
fo(i,n) cin>>v[i];

sort(v.begin() , v.end());



if(n < k)
{
    cout<<-1<<"\n";
    return;
}
else if(n==k)
{
    cout<<0<<" "<<0<<"\n";
}
else if( n >= k){
    cout<<0<<" "<<v[n-k]<<"\n";
    return;
}





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
