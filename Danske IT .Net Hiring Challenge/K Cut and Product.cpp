#include <iostream>
#include <string>
#include <algorithm>
#include <iostream>
#include <string>
#include <math.h>
// #include <vector>
#include <map>
// #include <set>
using namespace std;

int divisible_n(int x){
  int count = 0;
  for(int i=1;i<(x>>1);i++){
    if((x%i)==0)
      count++;
  }
  return count+1;
}
// function to count the divisors 
int countDivisors(int n) 
{ 
    int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i) 
                cnt++; 
            else // Otherwise count both 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  std::map <int,int> mmap;
  int sizeA;
  cin >> sizeA;
  //int * arr = new int[sizeA];
  for(int i=0;i<sizeA;i++){
    //
    //cin >> arr[i];
    int input;
    cin >> input;
    // int divN = divisible_n(input);
    int divN = countDivisors(input);
    // cout<<"divN = "<<divN<<endl;
    mmap[divN]++;
  }
  int sum = 0;
  for(auto it=mmap.begin();it!=mmap.end();it++){
    //
    // cout<<it->first<<" - "<<it->second<<"\n";
    int n_tmp = it->second;
    if(n_tmp > 2)
      sum += ((n_tmp*(n_tmp-1))/2);
    else if(n_tmp == 2)
      sum += 1;
    // if( it->second >=)
    //   max = it->first;
  }
  cout<<sum;


  return 0;
}
