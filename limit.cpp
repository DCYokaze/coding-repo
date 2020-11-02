#include <limits>
#include <iostream>
using namespace std;
int main()
{
  int imin = std::numeric_limits<int>::min(); // minimum value
  int imax = std::numeric_limits<int>::max();
  long lmin = std::numeric_limits<long>::min(); // minimum value
  long lmax = std::numeric_limits<long>::max();
  cout<<imin<<endl;
  cout<<imax<<endl;  
  cout<<lmin<<endl;
  cout<<lmax<<endl;
  long l=(long)65536*65536;
  cout<<l<<endl;
  long lend = (long)65536*256*256;
  cout<<lend<<endl;
  cout<<"n"<<"\n";
  return 0;
}