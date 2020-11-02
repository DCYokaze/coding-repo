#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#include <iostream>
#include <string>
#include <queue>
#include <math.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int qN;
  cin >> qN;
  for(int i=0;i<qN;i++){
    long N,k;
    cin >> N >> k;

    long pickOut = k;
    
    bool isA = true;
    for(;;){
      N-=pickOut;
      isA = !isA;
      if(N<0)break;

      N-=pickOut;
      isA = !isA;
      if(N<0)break;

      pickOut *= k;
    }
    if(isA)
      cout<<"Alice"<<endl;
    else
      cout<<"Bob"<<endl;
  }
}