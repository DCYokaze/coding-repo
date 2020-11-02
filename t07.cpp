// Write your code here
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  int num = 0;
  cin >> num;
  for(;num>0;num--){
    int size, r;
    cin >> size;
    cin >> r;
    int * arr = new int[size];
    for(int i=0;i<size;i++){
      cin >> arr[i];
    }
    for(int i=0;i<size;i++){
      int idx = i-r;
      while(idx<0)
        idx+=size;
      while(idx>=size)
        idx-=size;
      // cout<< idx <<endl;
      // cout<<arr[(i-r+size)%size]<<" ";
      cout<<arr[idx]<<" ";
    }
    cout<<endl;
    delete [] arr;
  }
}