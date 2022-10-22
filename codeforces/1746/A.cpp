#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{

int n ,k;
cin>>n>>k;

vector<int>v(n);
int sum =0;
for(int i=0;i<n;++i)
{
          cin>>v[i];
          sum+=v[i];
}

if(sum>0)
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
