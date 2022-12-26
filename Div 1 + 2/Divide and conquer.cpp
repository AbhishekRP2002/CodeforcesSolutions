#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{


      int n; 
      cin >> n;

      vector<int> odd;
      vector<int> even;
      for(auto j = 0; j < n; j++) {
        int x;
        cin >> x;
        if (x % 2 != 0) 
        {
                  odd.push_back(x);
                  
        }
        else
        {
                  even.push_back(x);
                  
        }
      }
          map<int , int>m;
          set<int>s;
      int ans2 = INT_MAX;

      if(odd.size()&1) 
      {
          vector<int> minEqual;
          for(auto i : odd) {
            int ctr = 0;
            int temp = i;
            while (temp % 2 != 0) {
              temp = floor(temp/2);
              ctr++;
              m[ctr]++;
              s.insert(temp);
            }
            minEqual.push_back(ctr);
          }
        ans2 = *min_element(minEqual.begin() , minEqual.end());
          ll xxxx = ans2;
        int ans1 = INT_MAX;
      
        if (even.size() > 0) {
          vector<int> evenEqual;
          for(auto i : even) {
            int ctr = 0;
            int temp = i;
            while (temp % 2 == 0) 
            {
              temp = floor(temp/2);
              ctr++;
               m[ctr]++;
              s.insert(temp);
            }
            
            evenEqual.push_back(ctr);
          }
          ans1 = *min_element(evenEqual.begin() , evenEqual.end());
        }

        ll xys = ans1 + ans2 ;
        m[ans1]++;

        

        cout << min(ans1, ans2) << endl;
      }
        else 
        cout << 0 << endl;
      






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
