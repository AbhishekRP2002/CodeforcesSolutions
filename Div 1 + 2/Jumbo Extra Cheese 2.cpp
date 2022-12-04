#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{

int n ;
cin>>n;
ll dim[n][2];
ll minWidth = 0;
for(ll i=0;i<n;++i)
{
          cin>>dim[i][0];
          cin>>dim[i][1];
      
}

vector<int>v;

for(ll i=0;i<n;++i)
{
              int minmDim =  min(dim[i][0] , dim[i][1]);
          minWidth += minmDim;
          if(minmDim == dim[i][0])
          v.push_back(dim[i][1]);
          else
          v.push_back(dim[i][0]);
          
}

ll minP =0;


ll heightP=  *max_element(v.begin() , v.end());


minP = 2*heightP + 2*minWidth;

cout<<minP<<"\n";

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
