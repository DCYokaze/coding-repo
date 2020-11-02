#include <bits/stdc++.h>
using namespace std;

void fun(int n, long long a[])
{
  for(int i=1;i<=n;i++){
    long long num = a[i];
    // cout<<"num = "<<num<<"\n";
    int nbit = 0;
    while(num){
      nbit += num & 1;
      num >>= 1;
    }
    // cout<<"nbit = "<<nbit<<"\n";
    int res = 1;
    while(nbit){
      res*=2;
      nbit--;
    }
    cout<<res<<"\n";
  }
}

int main()
{
  int t;
  cin>>t;
  long long a[t+1];
  for(int i=1;i<=t;i++)
        cin>>a[i];
    fun(t,a);
    return 0;
}