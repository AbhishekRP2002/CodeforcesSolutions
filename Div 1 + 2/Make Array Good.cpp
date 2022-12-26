#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{

    int n;
    cin>>n;
    ll ctr = 0;
    vector<vector<int>> v;
    for (int i = 0; i < n; ++i)
    {
      
        int a;
        cin>>a;
        v.push_back({a,i+1});
        ctr++;
        ctr+=2;
    
    }
    sort(v.begin(),v.end());
    int temp = 0;
    map<int , int>m;

    cout<<n-1<<endl;
    temp++;
    
    for (int i = 1; i < n; ++i)
    {
        
        int p=(v[i][0])%v[i-1][0];
        m[v[i][0]]++;
        if(p==0)
        { 
           temp+=2;
           temp+=p;
           // cout<<v[i]<<" ";
           cout<<v[i][1]<<" "<<0<<endl;
            continue;
        }
        v[i][0]=v[i][0]+v[i-1][0]-p;
       temp++;
       
        cout<<v[i][1]<<" "<<v[i-1][0]-p<<endl;
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
