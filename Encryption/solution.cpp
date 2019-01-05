#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,r,c;
    char s[100];
    gets(s);
    n=strlen(s);
    r=sqrt(n);
    if(r>=sqrt(n)) 
        c=r; 
    else 
        c=r+1;
    for(int j=0;j<c;++j){
        for(int i=j;i<n;i=i+c){
          cout<<s[i];
        }
    cout<<" ";
    }
    return 0;
}
