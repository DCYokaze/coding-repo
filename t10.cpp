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
    string s;
    cin >> s;
    int len = s.length();
    bool isPal = true;//false;
    
    for(int i=0;i<len;i++){
      int j = len-1-i;
      if(i>=j)
        break;
      if(s[i]!=s[j]){
        isPal = false;
        break;
      }
    }
    if(isPal){
      cout<<"YES ";
      if(len%2 == 0)
        cout<<"EVEN";
      else
        cout<<"ODD";
    }
    else
      cout<<"NO";
    cout<<"\n";
  }
}