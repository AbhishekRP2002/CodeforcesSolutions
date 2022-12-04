#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{

int l , r , x , a , b;
cin>>l>>r>>x;
cin>>a>>b;
if(a==b)
{
          cout<<0<<"\n";
          return;
}

if(a>b)
swap(a,b);

if(b-a >= x)
{
          cout<<1<<"\n";
          return;
}
else if(r-x>=b or (b-x>=l and a-x>=l) )
{
          cout<<2<<"\n";
          return;
}
else if(r-a>=x and r-l>=x and b-l>=x)
{
          cout<<3<<"\n";
          return;
}

else
{
          cout<<-1<<"\n";
          return;
}




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
