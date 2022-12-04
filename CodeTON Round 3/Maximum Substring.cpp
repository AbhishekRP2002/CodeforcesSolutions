#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{
           int n;
       
        cin >> n;
         string s;
        cin >> s;
        ll x = 0 , y = 0;
        ll c = 0 , cnt = 0 , cntx = 0 , cnty = 0;
        for(int i = 0; i < n;i++){
            if(s[i] == '1') {
                cnt++;
                cntx++;
                c = 0;
            }
            else{
                cnty++;
                c++;
                cnt = 0;
            }
            x = max(x , cnt);
            y = max(y , c);
        }
        cout << max({x*x , y*y , cntx*cnty}) << endl;




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
