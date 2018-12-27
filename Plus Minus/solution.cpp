#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[200],b[200],p=0,q=0,r=0;
    cin >> n;
    for(int i=0;i<n;i++)
      cin>>a[i];
    for(int i=0;i<n;i++){
    if(a[i]>0)
       p++;    
    if(a[i]<0)
       q++;
    if(a[i]==0)
       r++;
    }
    cout << (float)p/n << endl << (float)q/n << endl << (float)r/n;
    return 0;
}
