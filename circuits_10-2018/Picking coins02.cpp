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
    unsigned long N,k;
    cin >> N >> k;

    unsigned long pickOut = k;
    bool isA = true;

    if(k==1){
      if(N%2 == 1)
        cout<<"Alice"<<endl;
      else
        cout<<"Bob"<<endl;
      continue;
    }

    for(;;){
      if( N < (pickOut << 1) ){
        //fine grain pickOut
        if( N < pickOut )
          isA = false;

        break;
      }
      else{//just go to next loop
        N -= (pickOut << 1);
      }
      pickOut *= k;
    }
    if(isA)
      cout<<"Alice"<<endl;
    else
      cout<<"Bob"<<endl;
  }
}