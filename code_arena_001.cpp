#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#include <iostream>
#include <string>
#include <queue>
// #include <vector>
// #include <algorithm>
using namespace std;
struct vx{
  int val;
  int lv;
};
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  std::queue<vx> mq;
  int key_my;
  int keyDoor;
  // cin >> dimy >> dimx;
  // cin >> dimx >> dimy;
  cin >> key_my >> keyDoor;

  int keyNum;
  cin >> keyNum;
  // int * keyMulti = new int[keyNum];
  // cout<<"key door = "<<keyDoor<<endl;
  for(int i=0;i<keyNum;i++){
    int newVal;
    cin >> newVal;
    vx n1;
    n1.val = newVal;
    n1.lv = 1;
    mq.push(n1);
  }
  int multiRes = key_my;
  int count = 0;
  int foundRes = 0;
  /*
  for(int i=0;i<keyNum;i++){
    count++;
    multiRes *= keyMulti[i];
    multiRes %= 100000;
    cout<<multiRes<<endl;
    // if(multiRes == keyDoor){
    if( (multiRes) == keyDoor){
      foundRes = 1;
      break;
    }
  }
  if(foundRes == 0)
    cout<<"-1"<<endl;
  else
    cout<<count<<endl;
  */


}