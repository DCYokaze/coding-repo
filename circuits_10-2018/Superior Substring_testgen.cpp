#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#include <iostream>
#include <string>
#include <queue>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  srand(12);
  int testCase = 10;
  cout<<testCase<<endl;
  for(int i=0;i<testCase;i++){
    int len = rand()%30+1;
    cout<<len<<"\n";
    for(int j=0;j<len;j++){
      int r = rand()%26;
      char c = r+'a';
      cout<<c;
    }
    cout<<"\n";
  }
}