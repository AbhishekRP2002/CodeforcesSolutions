#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define M 998244353





void solution() 
{
    int mat[2][2];
    for(int i=0;i<2;++i)
    {
              for(int j=0;j<2;++j)
              cin>>mat[i][j];
    }
    
    vector<int>nums(4);
    nums[0] = mat[0][0];
    nums[1] = mat[0][1];
    nums[2] = mat[1][1];
    nums[3] = mat[1][0];

int min_ind = min_element(nums.begin() ,nums.end()) - nums.begin();
vector<int> v(4);
for(int i=0;i<3;++i)
{
          v[i] = nums[min_ind];
          min_ind = (min_ind+1)%4;
}
v[3] = nums[min_ind];

if(!is_sorted(v.begin() , v.begin()+3))
puts("NO");
else
{
          if(v[3] > v[0] and v[3] < v[2])
          puts("YES");
          else
          puts("NO");
}


    
//           int ctr=0;
        
//         for(int i=0;i<nums.size()-1;++i)
//         {
//             if(nums[i]>nums[i+1])
//             {
//                 ctr++;
//             }
//         }
        
//         if(nums[nums.size()-1]>nums[0])
//             ctr++;
        
//         if (ctr<=1)
//            puts("NO");
//         else 
//            puts("YES");
        
    
    
         
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
