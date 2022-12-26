#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{


 
   string s;
   cin>>s;
   map<char, int>m;
   if(s[0]!='a')
   {
             puts("NO");
             return;
   }
   else
   {
          stack<int>st;
          st.push(s[0]-'a');
          for(auto i:s)
          {
                    if(i-'a' == st.top())
                    continue;
                    else
                    st.push(i-'a');
                    
          }
          
          string temp = "";
          while(!st.empty())
          {
               temp += (st.top()+'a');
               st.pop();
          }
          
          reverse(temp.begin() , temp.end());
          if(temp=="abc")
          {
                    map<int,int>m;
                    for(auto i:s)
                    {
                              m[i-'a']++;
                    }
                    
                    if(m[2] == m[0] or  m[2]==m[1] )
                    {
                              puts("YES");
                              return;
                    }
          }
            
            puts("NO"); 
             
   }
   
   
   
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
// 	int t;
// 	cin>>t;

// 	while(t--) {
	 
	    solution();
	   
	  //  }
	return 0;
}
