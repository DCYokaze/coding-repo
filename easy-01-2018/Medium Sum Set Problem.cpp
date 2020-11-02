#include <iostream>
#include <string>
#include <algorithm>
#include <iostream>
#include <string>
#include <math.h>
// #include <vector>
#include <map>
// #include <set>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int sizeA;
  cin >> sizeA;
  int * setA = new int[sizeA];
  for(int i = 0;i<sizeA;i++){
    cin >> setA[i];
  }
  int sizeC;
  cin >> sizeC;
  int * setC = new int[sizeC];
  for(int i = 0;i<sizeC;i++){
    cin >> setC[i];
  }
// cout<<"a1"<<sizeC<<sizeA<<endl;
  // std::vector <int> dvect;
  // std::set <int> dset,fset;
  std::map <int,int> dmap;
  for(int j=0;j<sizeA;j++){
    for(int i=0;i<sizeC;i++){
    //
      int ntmp = setC[i] - setA[j];
      dmap[ntmp]++;

    }
  }
// cout<<"a1"<<endl;
  for(auto it=dmap.begin();it!=dmap.end();it++){
    if(it->second == sizeA)
      cout<<it->first<<" ";
  }



  delete [] setA;
  delete [] setC;

  return 0;
}
