#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{
      
          vector<int>v(3);
          for(int i=0;i<3;++i)
         cin>>v[i];
         
         sort(v.begin() , v.end());
         if(v[2]== v[1] + v[0])
         puts("YES");
         else
         puts("NO");


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
