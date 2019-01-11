 #include <bits/stdc++.h>
using namespace std;
int main()
{
    double n,x,y,z;
    cin>>n;
    for(int g=0;g<n;g++){
        cin>>x>>y>>z;
        int m=abs(z-y);
        int o=abs(z-x);
        if(m>o){
            cout<<"Cat A"<<endl;
        }
        else if(m<o){
            cout<<"Cat B"<<endl;
        }
        else if(m==o){
            cout<<"Mouse C"<<endl;
        }

    }
    return 0;
}

