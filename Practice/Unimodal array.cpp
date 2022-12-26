#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{


 
   int n;
   cin>>n;
vector<int>v(n);
for(int i=0;i<n;++i)
{
          cin>>v[i];
}
if(n==1)
{
          puts("YES");
          return;
}

	else
	{
	int count=0;
	int flag=0;
	int i;
	for(i=0;i<n-1;i++)
	{
		if(v[i]<v[i+1])count++;
		else break;
	//	cout<<count;
		
	}
	int j;
	for(j=i;j<n-1;j++)
	{
		if(v[j]==v[j+1])count++;
		else break;
	//	cout<<count;
		
	}
	//cout<<endl;
	for(i=j;i<n-1;i++)
	{
		if(v[i]>v[i+1])count++;
		else break;
	//	cout<<count;
		
	}
	if(count==n-1)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
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
