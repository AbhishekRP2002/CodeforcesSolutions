#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{

int n , k;
cin>>n>>k;

vector<int>prefs(k);
for(int i=0;i<k;++i)
{
          cin>>prefs[i];

}

int temp = n-k+1;

if(temp >= prefs[0])
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
