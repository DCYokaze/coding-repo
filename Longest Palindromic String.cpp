#include <iostream>
#include <string.h>
using namespace std;

inline int isPal(string & sin){
  for(int i=0,j=sin.length()-1; (j>=i);i++,j--){
    if(sin[i]!=sin[j]){
      return 0;
    }
  }
  return 1;
}
string longestPal(string sin){
  string s_longest = "";
  for(int i=0;i<sin.length();i++){
    for(int j=sin.length()-i;j > 0;j--){

      if(j<s_longest.length())//ignore less length
        break;
        //continue;

      string tmp_s = sin.substr(i,j);
      if(isPal(tmp_s)){
        if(tmp_s.length() > s_longest.length()){
          s_longest = tmp_s;
        }
      }
    }
  }
  return s_longest;
}



//the improved version.
// int isPal(string & sin){}
int isPal2(const char * cin, int i_in, int j_in,int len){
  //here, i_in = start point of i
  //and j_in = end point
  j_in += i_in;
  for(int i=i_in,j=j_in-1 ; (j>=i) ;i++,j--){
    if(cin[i]!=cin[j]){
      return 0;
    }
  }
  return 1;
}
string longestPal2(string sin){
  const char * cin = sin.c_str();
  int m_start=0,m_size=0;
  int len = sin.length();
  for(int i=0;i<len;i++){
    for(int j=len-i;j > 0;j--){
      if(j<m_size)
        break;
      //chk if pal here
      if(isPal2(cin,i,j,len))
      {
        if((j) > (m_size))
        {//save the new value;
          m_size = j;
          m_start =i;
        }
      }
    }
  }
  string tmp_s = sin.substr(m_start,m_size);
  return tmp_s;
}
int main(int argc, char *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string line;
  int index = 1;
  while (!cin.eof()) {
    getline(cin, line);
    if(line.length()>0)
      cout << longestPal2(line) ;
  }
  return 0;
}
