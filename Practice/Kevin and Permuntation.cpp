#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{
           ll n;
       
        cin >> n;
        vector<ll>v(n);
        for(ll i=0;i<n;++i)
        {
                  v[i] = i+1;
        }
        
        vector<ll>ans;
        if(n%2!=0)// odd case
        {
                  ll i = n/2;
                  ll j = n-1;
                  while(i>0)
                  {
                            ans.push_back(v[i]);
                            i--;
                            ans.push_back(v[j]);
                            j--;
                  }
                  
                  ans.push_back(v[i]);
        }
        else
        {
                  ll i = n/2-1;
                  ll j = n-1;
                  while(i>=0)
                  {
                            ans.push_back(v[i]);
                            i--;
                            ans.push_back(v[j]);
                            j--;
                            
                  }
         }

for(auto i:ans)
std::cout << i <<" ";
cout<<"\n";


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
