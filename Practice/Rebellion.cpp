#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{

int n ;
cin>>n;

vector<int>v(n);
for(int i=0;i<n;++i)
{
          cin>>v[i];

}
int left = 0 , right = n-1;
int ctr = 0;
while(left<right)
{
          if(v[left]==1 and v[right]==0)
          {
                    ctr++;
                    left++;
                    right--;
          }
          else if(v[left]==0)
          left++;
          else if(v[right]==1)
          right--;
}

cout<<ctr<<"\n";



     

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
