#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{
           int n;
       
        cin >> n;
       char c;
       cin>>c;
       string s;
       cin>>s;
       s+=s;
       int ans = 0;
       for(int i=0;i<2*n;++i)
       {
                 if(s[i]==c)
                 {
                           for(int j=i;j<2*n;++j)
                           {
                                     if(s[j]=='g')
                                     {
                                               ans = max(ans , j-i);
                                               
                                               break;
                                     }
                                  
                           }
                 }
       }

cout<<ans<<"\n";


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
