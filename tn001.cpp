#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#include <iostream>
#include <string>
// #include <vector>
// #include <algorithm>
using namespace std;

int sumArr(int ** arr,int sx,int sy,int size)
{
  int sum = 0;
  for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
      sum += arr[sx+i][sy+j];
      cout<<"+"<<arr[sx+i][sy+j];
    }
  }
  cout<<" "<<sum<<"  sx="<<sx<<" sy="<<sy<<" size = "<<size<<endl;
  return sum;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int dimx=0,dimy=0;
  // cin >> dimy >> dimx;
  cin >> dimx >> dimy;
  int max_n = 0;
  cin >> max_n;

  //copy array
  int** a = new int*[dimx];
  for(int i = 0; i < dimx; i++){
    a[i] = new int[dimy];
    for(int j=0 ; j < dimy; j++){
      cin >> a[i][j];
    }
  }
/*
  for(int i = 0; i < dimx; i++){
    for(int j=0;j < dimy;j++){
      cout<<a[i][j];
    }
    cout<<endl;
  }
*/
  int loopLim = dimx;
  if(dimy<dimx)
    loopLim = dimy;
  int maxMat = loopLim ;//start with largest possible matrix
  int res = 0 ;
  int breakOut=0;
  for(int s = maxMat;s>0&&!breakOut;s--){
    int sum = 0;
    for(int i=0;i<dimx-s+1&&!breakOut;i++){
      for(int j=0;j<dimy-s+1&&!breakOut;j++){
        //
        // cout<<sum<<endl;
        // cout<<"["<<i<<"]";
        // cout<<"["<<j<<"]";
        // cout<<endl;
        // sum += a[i][j];
        sum = sumArr(a,i,j,s);
        // cout<<sum<<endl;

        if(sum <= max_n){
          res = s*s;
          // cout<<"got that. ="<<res<<endl;
          breakOut=1;
        }
      }
    }
  }
  cout<<res<<endl;

  for(int i=0;i<dimx;i++)
    delete[] a[i];
  delete[] a;
}