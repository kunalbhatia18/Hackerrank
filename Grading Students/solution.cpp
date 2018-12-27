#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[100],size;
    cin>>size;
    for(int i=0;i<size;i++)
      cin>>a[i];
    for(int j=0;j<size;j++){
      if(a[j]<38)
        cout<<a[j]<<endl;
      else if((a[j]+2)%5==0)
        cout<<a[j]+2<<endl;
      else if((a[j]+1)%5==0)
        cout<<a[j]+1<<endl;
      else if(a[j]%5==0)
        cout<<a[j]<<endl;
      else
        cout<<a[j]<<endl;
    }
    return 0;
}
