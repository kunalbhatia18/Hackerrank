#include <bits/stdc++.h>
using namespace std;
int main() {
    int h,m,s;
    char c;
    scanf("%d:%d:%d%c",&h,&m,&s,&c);
    if(c=='P')
        if(h==12)
            cout<<12;
        else cout<<h+12;
    else if(h<10)
            cout<<"0"<<h;
    else if(h==12)
        cout<<"00";
    else cout<<h;    
    if(m<10)
        cout<<":0"<<m;
    else cout<<":"<<m;
    if(s<10)
        cout<<":0"<<s;
    else cout<<":"<<s;    
    return 0;
}


