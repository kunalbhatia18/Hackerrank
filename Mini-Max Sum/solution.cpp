#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long a[5],sum1=0,sum2=0,i,j,temp=0;
    for(int x = 0; x < 5; x++)
   {
        cin >> a[x];
    }
  for(i=0; i<5; i++){
        for(j=i+1; j<5; j++){
            if(a[j] < a[i]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
  }
    for(int p=0;p<4;p++)
      sum1+=a[p];
    for(int q=1;q<5;q++)
      sum2+=a[q];
cout<<sum1<<" "<<sum2;
   return 0;
}
