#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a[100],sum=0,size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<sum;

    return 0;
}
