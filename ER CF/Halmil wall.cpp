#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{
// ll x , y;
// cin>>x>>y;

// if( (y-x) == 1)
// {
//           cout<<-1<<"\n";
//           return;
// }


//   if(gcd(y ,x) != 1)
//   {
//             cout<<0<<"\n";
//   }
//   else if(gcd(y ,x) == 1)
//   {
//             if( ((y-x) & 1) == 0) // both odd but diff is even
//             {
//                       cout<<1<<"\n";
//             }
//             else if( ((y-x) & 1) != 0)
//             {
//                       int ctr = 0;
//                     //   while(gcd( x , y ) == 1)
//                     //   {
//                     //             x++;
//                     //             y++;
//                     //             ctr++;
//                     //   }
                      
//                     //   cout<<ctr<<"\n";
                    
                    
//                     int 
//             }
            
            
            ll n ;
            cin>>n;
            char a[2][n];
         for(int i=0; i<2; i++)
         {
            for(ll j=0; j<n; j++)
            {
                cin>>a[i][j];
            }
         }
         ll p=0;
         char k1, k2;
         ll temp=0;
         ll t=0;
         int ctr =0 ;
         bool flag = true;
         for(ll i=0; i<n; i++)
         {
            if(a[0][i]!=a[1][i] and p==0)
            {
                k1=a[0][i];
                k2=a[0][1];
                p=1;
                temp=0;
                continue;
            }
            else if(a[0][i]=='B' and a[1][i]=='B')
            {
                temp++;
                flag = !flag;
            }
            else if(a[0][i]!=a[1][i])
            {
                if(k1==a[0][i])
                {
                    if((temp&1)!=0)
                    {
                        t=1;
                        ctr++;
                        break;
                    }
                    else{
                        k1=a[0][i];
                        k2=a[1][i];
                        temp=0;
                        ctr++;
                    }
                }
                
                else if(k1 != a[0][i])
                {
                    if((temp&1)== 0)
                    {
                        t=1;
                        ctr++;
                        break;
                    }
                    else{
                        k1=a[0][i];
                        k2=a[1][i];
                        temp=0;
                        ctr+=2;
                    }
                }
            }
            

            
         }
         if(t==1)
            puts("NO");
            else 
            puts("YES");

      
  
  



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
