#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{

int n;
cin>>n;
std::vector<ll>a(n,0) ;
for(int i=0;i<n;++i)
{
          cin>>a[i];
}

vector<ll>b(n,0);
for(int i=0;i<n;++i)
{
          cin>>b[i];
}

ll time = 0;
for(int i=0;i<n-1;++i)
{
          auto min = min_element(b.begin() ,b.end());
          int min_ind = min - b.begin();
          if(min_ind>0 and min_ind<n-1)
          {
                    a[min_ind-1] += b[min_ind];
                    a[min_ind + 1]+= b[min_ind];
                    time += a[min_ind];
                    
          }
          else if(min_ind==0)
          {
                    a[min_ind+1]+=b[min_ind];
                     time += a[min_ind];
          }
          else if(min_ind == n-1)
          {
                      a[min_ind-1] += b[min_ind];
                       time += a[min_ind];
          }
          
          a.erase(a.begin() + min_ind);
          b.erase(b.begin() + min_ind);
}

time+=a[0];

cout<<time<<"\n";

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
