// Write your code here
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <chrono>
using namespace std;

int compareInt(int a, int b){
  if(a>b)
    return 0;
  else
    return 1;
}
int compareStr(string s1,string s2){
  if(s1.compare(s2)>0)
    return 0;
  else
    return 1;
}

int main()
{
  int num = 0;
  auto started = std::chrono::high_resolution_clock::now();
  string s1="12345645";
  string s2="45655555";
  for(int i=0;i<5000000;i++){
    // compareStr(s1,s2);
    // compareInt(stoi(s1),stoi(s2));
    // compareInt(12345645,45655555);
  }
  // DoWork();
  auto done = std::chrono::high_resolution_clock::now();

  std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(done-started).count();


}