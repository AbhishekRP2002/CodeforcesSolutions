#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define M 998244353





void solution() 
{

    int k, n;
    cin>>k>>n;
    vector<int> tem;
    
    vector<int> ans(n+1, 0);
    int cnt=0, temp=k, mark=0;
    int ind = 1;
    while(ind<=n and temp--) //k1 -- temp  ,  t---cnt
    {
            ans[ind]++;
            cnt++;
            mark++;
            ind+=(cnt);
             
    }
    
    
     int first=1 , fuck = k;
     cout<<first<<" ";

    
    int  x=0;
    
    for(int i=1; i<=n; i+=x)
    {
        tem.push_back(i);
        x++;
    }
    
    int xt = k;
    int  ctr = 0;
    int max_distictDiff = tem.size()-1;
    if(k <= tem.size())
    {
        int i=1 ;
        while(k--)
        {
          //         cout<<i<<" ";
                  ctr++;
                  i+=ctr;
        }
    }
    else 
    {
        ctr++;      
    }

    int low = xt-mark;
    set<int>s;
    ll sum = accumulate(ans.begin(), ans.end(), 0);
   

    if(low >0)
    {
        for(int i=n; i>=1 and low > 0; i--)
        {
            if(ans[i]==0)
            ans[i]++;
            low--;
        }
    }
    
    
    map<int ,int>m;
    for(int i=0;i<ans.size();++i)
    {
              m[ans[i]] = i;
    }


       // k-- d , n-- f
             for(int i=1;i<fuck;i++){
                if(n-first+1 >= fuck){
                        first+=i;
        }
        else first++;
        cout<<first<<" ";
                }
        cout<<"\n";
    

         
 }


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
   ll t;
   cin>>t;
   while(t--)
   solution();
	   
	  
	return 0;
}
