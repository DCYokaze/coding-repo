#include <iostream>
#include <string.h>
using namespace std;

inline int isPal(string & sin){
  for(int i=0,j=sin.length()-1; (j>=i);i++,j--){
    // for(int j=sin.length()-1;j>=i;j--){
      // cout<<sin[i]<<" "<<sin[j]<<endl;
      if(sin[i]!=sin[j]){
        return 0;
      }
    // }
  }
  // cout<<"FOUND"<<sin<<endl;
  return 1;
}
string longestPal(string sin){
  
  if(isPal(sin))
    return sin;

  string s_longest = "";
  for(int i=0;i<sin.length();i++){
    for(int j=sin.length()-i;j > 0;j--){
      string tmp_s = sin.substr(i,j);
      // cout<<"i="<<i<<" "<<"j="<<j<<"  ";
      // cout<<tmp_s<<endl;
      if(isPal(tmp_s)){
        if(tmp_s.length() > s_longest.length()){
          s_longest = tmp_s;
        }
      }
    }
  }
  return s_longest;
}



//the improved version, not sure if it can be done in 2 hours.
// int isPal(string & sin){}
string longestPal2(string sin){
  
}
int main(int argc, char *argv[]) {

  string line;
  int index = 1;
  while (!cin.eof()) {
    getline(cin, line);
    if(line.length()>0)
      cout << longestPal(line) ;
  }
  return 0;
}
