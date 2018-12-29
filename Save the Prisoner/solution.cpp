#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    long int n,m,s;
    while(t>0){
        cin>>n>>m>>s;
        if(m+s<n)
          cout<<m+s-1<<endl;
        else
          if((m+s-1)%n==0)
            cout<<n<<endl;
          else
            cout<<(m+s-1)%n<<endl;
        t-=1;
    }
    return 0;
}
