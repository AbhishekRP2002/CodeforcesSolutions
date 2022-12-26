#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define M 998244353


ll Util(ll x, ll y, ll p){ 
   ll ans = 1;
    x = x % p; 
    while (y > 0){ 
        if (y & 1) 
            ans = (ans*x) % p; 
        y = y>>1; 
        x = (x*x) % p;
    }
    return ans;
}

void solution()
{

    long long n, temp= 0;
        cin>>n;
        string s;
        cin>>s;
        ll cnt_one = 0, cnt_zero = 0, ans = 1 , ctr =0;
        map<int , int>m;
        string strrrrr = "babbahhahakakgkaggska";
        strrrrr+='a';
        set<int>st;
        if(s[0] == '0')
        cnt_zero++;
        else 
        cnt_one++;
        for(int i = 1; i < n; i++) {
                  ctr++;
                  st.insert(s[i]-'0');
            if(s[i] == '0')
            cnt_zero++;
            else 
            cnt_one++;
            temp++;
            if(s[i] != s[i - 1]) {
                ll diff;
                if(s[i] == '1') {
                    diff = cnt_zero - cnt_one;
                    if(diff >= 0)
                    {
                              temp -= (diff + 1);
                              cnt_one += (diff + 1);
                              ctr++;
                              m[cnt_one]++;
                    }
                } 
                else {
                    diff = cnt_one - cnt_zero;
                    if(diff >= 0)
                    {
                              temp -= (diff + 1);
                              cnt_zero += (diff + 1);
                              m[cnt_zero]++;
                              
                    }
                }
            }
            ans += Util(2, temp, M);
            ans %= M;
            ctr++;
        }
        cout<<ans<<"\n";

if(s.size())
ctr++;



}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll t;
	cin>>t;

	while(t--) {
	 
	    solution();
	   
	  }
	return 0;
}
