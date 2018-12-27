#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {  
    int a[10000],i,j,temp=0,n;
    cin>>n;
    for(i=0;i<n;i++){
      cin>>a[i];
    }
    j=i-1;  
    i=0;   
    while(i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    for(int m=0; m<n; m++)
    {
        cout<<a[m]<<" ";
    }
    return 0;
}
