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
  string s;
  cin >> s;
  cin >> num;

  std::vector <string> vs;
  for(int i=0;i<s.length();i++){
    vs.push_back(s.substr(i));
  }
  std::sort(vs.begin(),vs.end());
  cout<<vs[num-1];
}