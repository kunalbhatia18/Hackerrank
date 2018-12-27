#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

int sum=0,i,a,array[1000];
    cin>>a;
    for(i=0;i<a;i++)
    {
    cin>>array[i];
    }
    for(i=0;i<a;i++)
    {
        sum+=array[i];
    }
    cout<<sum;

    return 0;
}
