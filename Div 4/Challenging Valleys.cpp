#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{


 
   int n;
   cin>>n;
   vector<int> v(n);
 
   for(int i=0; i<n; i++) {
      cin>>v[i];
      
   }
   
     vector<int>temp;
     temp.push_back(v[0]);
   
   for(int i=1;i<n;++i)
   {
             if(temp.back()!=v[i])
                 temp.push_back(v[i]);
   }
 
  
   int ctr = 0;
   if(temp.size()<=2){
     puts("YES");
      return;
   }
   for(int i=1;i<temp.size()-1;i++){
      if((temp[i]>temp[i-1]) and (temp[i]>temp[i+1])){
         puts("NO");
         return;
      }
      if(temp[i]<temp[i-1] and temp[i]<temp[i+1]){
         ctr++;
      }
   }
 
 
   if(ctr>1){
     puts("NO");
   }
   else 
   puts("YES");

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
