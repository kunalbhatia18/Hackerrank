#include <iostream>

using namespace std;

int main()
{
    int a[1000],n,size;
    cin>>n;
    cin>>size;
    for(int i=0;i<size;i++){
      cin>>a[i];
    }
    for(int j=0;j<size;j++){
        if(a[j]==n){
            cout<<j;
        }
    }
    

    return 0;
}
