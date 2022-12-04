#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{

int n ;
cin>>n;
vector<int>v(n,0);
for(int i=0;i<n-1;++i)
{
          if(i==0)
          v[i]=2;
          else
          v[i] = v[i-1]+1;
}

v[n-1] = 1;
// int temp = 1;

// for(int i=0;i<n;i+=2)
// {
//           v[i] = temp;
//           temp+=1;
   
// }

// if(n%2==0)
// {
//           int j = n-1;
//           while(j>0)
//           {
//                     v[j] = temp;
//                     temp+=1;
//                     j-=2;
//           }
// }
// else
// {
//           int k = n-2;
//           while(k>0)
//           {
//                     v[k]=temp;
//                     temp+=1;
//                     k-=2;
//           }
// }

for(auto i:v)
{
          cout<<i<<" ";
}

cout<<"\n";
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
