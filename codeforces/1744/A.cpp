#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{
  int n ;
  cin>>n;
  vector<int>arr(n,0);
  for(int i=0;i<n;++i)
  {
            cin>>arr[i];
  }
  
  string s;
  cin>>s;
  
 bool temp = true;
 map<int, char>m;
 
 for(auto i:arr)
 m[i]= '#';
 
 for(int i=0;i<arr.size();++i)
 {
           if(m[arr[i]]=='#' or m[arr[i]]==s[i])
           m[arr[i]]=s[i];
           else
           {
                     temp = false;
                     break;
           }
     
 }
 
 if(temp==false)
 puts("NO");
 else puts("YES");
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