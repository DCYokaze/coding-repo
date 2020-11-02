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

  int convArr[10] = {6,2,5,5,4,5,6,3,7,6};
  int qN;
  cin >> qN;
  for(int i=0;i<qN;i++){
    //
    string inputNum,outputNum;
    cin >> inputNum;
    // cout<<"qn = "<<qN<<endl;
    // cout<<"inputNum = "<<inputNum<<endl;
    int sumMatch = 0;
    for(int j=0;j<inputNum.length();j++){
      //
      int num = inputNum[j]-'0';
      sumMatch += convArr[num];
      // cout<<"num of match = "<<sumMatch<<endl;
    }
    string front;
    if(sumMatch%2 == 1){//a 7 in front
      front = "7";
      sumMatch -= 3;
    }
    else{
      front = "1";
      sumMatch -= 2;
    }
    outputNum = string(sumMatch/2,'1');
    cout<<front<<outputNum<<"\n";
  }

  return 0;
}


/*
1
19
ydwctkuxfqpyfehkqvl
//*/