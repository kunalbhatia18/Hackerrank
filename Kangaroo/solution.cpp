#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    if(x2>x1&&v2>v1)
        cout<<"NO";
    else{
        while(x2>x1){
            x2=v2+x2;
            x1=v1+x1;
              if(x1==x2)
                  cout<<"YES";
              if(x1>x2){
                  cout<<"NO";
                  break;
              }
        }
    }
    return 0;
}
