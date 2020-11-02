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
/*
class Solution {
public:
    int reverse(int x) {
      // char c[15];// = itoa)
      //itoa (x,c,10);
      if(x==0)
        return x;
      bool neg = false;
      if(x<0)
        neg = true;
      string cs = std::to_string(x);
      const char * c = cs.c_str();
      char c2[15];
      int len = cs.length();
      for(int i=0;i<len;i++){
        // cout<<(len-i-1)<<"="<<c[len-i-1]<<endl;
        c2[i] = c[len-i-1];
      }
      if(neg){
        string cs2 = c2;
        cs2 = "-"+cs2;
        int ret2 = atoi(cs2.c_str());
        return ret2;
      }
      int ret = atoi(c2);
      return ret;
    }
};
*/
int main(int argc, char *argv[])
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout << "You have entered " << argc 
       << " arguments:" << "\n"; 

  for (int i = 0; i < argc; ++i) 
      cout << argv[i] << "\n"; 

  return 0; 
}
