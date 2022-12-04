#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{

 int n;
 cin>>n;
 std::vector<int>v(n,0) ;
 for(int i=0;i<n;++i)
 {
           cin>>v[i];
 }
 
 vector<int>ans(n,0);
 ans[0]=v[0];
 int i =1;
 while(i<n-1)
 {
    if(v[i] > v[i+1])
    {
              cout<<-1<<"\n";
              return;
    }
    else if(v[i] <= v[i+1])
    {
              ans[i] = ans[i-1] + v[i];
    }
    i++;
 }
 ans[n-1]= ans[n-2] + v[n-1];
 
 for(auto it:ans)
 {
           cout<<it<<" ";
 }
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
