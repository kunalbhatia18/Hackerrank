#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x=0,a[100];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int m=0;m<n;m++){
        for(int j=0;j<n;j++){
            if(m<j){
                if((a[m]+a[j])%k==0){
                    ++x;
                }
            }
        }
    }
    cout<<x;
    return 0;
}

