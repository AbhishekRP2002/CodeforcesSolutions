#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{

string temp;
cin>>temp;
string s = "Yes";
int ind ;

for(int i=0;i<30;++i)
s+="Yes";
if((ind = s.find(temp, 0)) != string::npos)
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
