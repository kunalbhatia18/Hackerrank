#include <bits/stdc++.h>

using namespace std;
int main()
{
   int a[3], b[3],alice=0, bob=0,i;
   for(i = 0; i < 3; i++) 
       cin>>a[i]; 
    for(i = 0; i < 3; i++) 
       cin>>b[i];
    for(i = 0; i < 3; i++) 
    { 
     if(a[i] > b[i])
       alice++;
     else if(b[i] > a[i]) 
       bob++; 
    }
     cout<<alice<<" "<<bob; 


    return 0;
}
