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
    int dim;
    cin >> dim;
    int** a = new int*[dim];
    for(int i = 0; i < dim; i++){
      a[i] = new int[dim];
      for(int j=0;j<dim;j++){
        cin >> a[i][j];
      }
    }

    // for(int i = 0; i < dim; i++){
    //   for(int j=0;j<dim;j++){
    //     cout<<a[i][j];
    //   }
    //   cout<<endl;
    // }
    int count=0;
    for(int i = 0; i < dim; i++){
      for(int j = 0; j < dim; j++){
        int val = a[i][j];
        for(int k = i; k < dim; k++){
          for(int l = j; l < dim; l++){
            if(val > a[k][l])
              count++;
          }
        }
      }
    }
    cout<<count<<endl;

    for(int i=0;i<dim;i++)
      delete[] a[i];
    delete[] a;
    
  }
}