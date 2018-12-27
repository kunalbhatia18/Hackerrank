#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000][1000],sum1=0,sum2=0,n,i,j;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0; j<n;j++){
            if(i==j){
                sum1+=a[i][j];
            }
            if(i==n-j-1){
                sum2+=a[i][j];
            }
        }
    }
    cout<<abs(sum2-sum1)<<endl;
    return 0;
}
