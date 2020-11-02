#include <iostream>
#include <string>
// #include <vector>
// #include <algorithm>
using namespace std;
string cut5func(string s,int b)
{
  string retS;
  int start,len;
  if( s.length() > ((b+1)*5) ) {//get it full 5
    start = s.length()-5;
    len = 5;
  }
  else if(s.length() > (b*5) ){
    start = 0;
    len = s.length()-(b*5);
  }
  else
    return "0";
  retS = s.substr(start,len);
  return retS;
};

int main()
{
  string s1 = "1234567890";
  int blockNum = 0;
  cout<<"test01"<<endl;
  cout<<cut5func(s1,0)<<endl;
  cout<<cut5func(s1,1)<<endl;
  cout<<cut5func(s1,2)<<endl;


}