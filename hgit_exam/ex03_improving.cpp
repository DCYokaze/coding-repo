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
  string s_longest = "";
  for(int i=0;i<sin.length();i++){
    for(int j=sin.length()-i;j > 0;j--){

      if(j<s_longest.length())//don't mind less length
        break;
        //continue;

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



//the improved version, not sure if it can be done in this 2 hours.
// int isPal(string & sin){}
int isPal2(const char * cin, int i_in, int j_in,int len){
  //here, i_in = start point of i
  //and j_in = end point
  j_in += i_in;
  //debug
  /*
  cout<<"ch______"<<j_in<<"____";
  for(int i = i_in;i<(i_in+j_in);i++)
    cout<<cin[i];
  cout<<"\n";*/

  for(int i=i_in,j=j_in-1 ; (j>=i) ;i++,j--){
    // cout<<"comparing i = "<<i<<" j = "<<j<<endl;
    if(cin[i]!=cin[j]){
      return 0;
    }
  }
  // cout<<"FOUND"<<endl;
  return 1;
}
string longestPal2(string sin){
  const char * cin = sin.c_str();
  int m_start=0,m_size=0;
  int len = sin.length();
  for(int i=0;i<len;i++){
    for(int j=len-i;j > 0;j--){
      //chk if pal here
      if(j<m_size)
        break;
      if(isPal2(cin,i,j,len))
      {
        // cout<<"chk a string "<<endl;
        string tmp_s1 = sin.substr(i,j);
        // cout<<"i="<<i<<" "<<"j="<<j<<"  ";
        // cout<<tmp_s1<<endl;
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

  // string sin = "A123321555518888888888888888888881X";
  // cout<<longestPal2(sin)<<""<<endl;
  // // cout<<
  // return 0;

  string line;
  int index = 1;
  while (!cin.eof()) {
    getline(cin, line);
    if(line.length()>0)
      cout << longestPal2(line) ;
  }
  return 0;
}
