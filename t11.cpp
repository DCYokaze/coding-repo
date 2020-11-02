// Write your code here
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
  int num = 0;
  cin >> num;
  // std::set<string> mset;
  string * arr = new string[num];
  int i=0;
  for(;num>0;num--){
    // string set1;
    string in;
    cin >> in;
    arr[i++] = in;
    
    int count = 0;
    for(int j=0;j<i;j++){
      if(arr[j]<in)
        count++;
    }
    cout<<count<<endl;




    // mset.insert(s);
    // int x = std::count()
    // cout<<mset.count();


  }
}