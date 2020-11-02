#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#include <iostream>
#include <string>
#include <math.h>
// #include <vector>
// #include <algorithm>
int maxConse(std::vector <int> v,int consec){
  int maxSum=0;
  int sumAcc = 0;
  for(int i=0;i<consec;i++){//init sum acc
    sumAcc+=v[i];
  }
  for(int i=0;i<=v.size()-consec;i++){
    if(sumAcc > maxSum)
      maxSum = sumAcc;

    sumAcc -= v[i];
    sumAcc += v[i+consec];
    // sum 
  }
  return maxSum;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int size,indi;
  cin >> size;
  cin >> indi;
  std::vector <int> vect;
  // int * arr = new int[size];
  for(int i=0;i<size;i++){
    int j;
    cin >> j;
    vect.push_back(j);
  }
  // int outed = 0;
  for(int i=0;i<size;i++){
    int mc = maxConse(vect,i+1);
    if(mc > indi){
      cout<<i<<endl;
      // outed = 1;
      break;
    }
  }
  // if(!outed)
  //   cout<<size<<endl;
}