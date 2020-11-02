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
int max_mv(std::vector<unsigned int> m){
  int max = 0;
  for( int j = 'a' ; j <= 'z' ; j++ ){
    if(max<m[j])
      max = m[j];
  }
  return max;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int qN;
  cin >> qN;
  for(int i=0;i<qN;i++){
    std::vector<unsigned int> mvect(128,0);
    int slen;
    // char * s = new char[slen];
    string s;
    cin >> slen >> s;
    for(int j=0;j<slen;j++){
      mvect[s[j]]++;
    }
    int beg = 0, end = slen - 1;
    // for(int j=0;;j++)
    int ans = 0;
    while(true){
      //debug
      
      for(int x=beg;x<=end;x++)
        cout<<s[x];
      cout<<endl;
      cout<<"beg = "<<beg<<" end = "<<end<<endl;
      cout<<"max = "<<max_mv(mvect)<<endl;
      // cout<<"f="<<mvect['f']<<"j="<<mvect['j']<<endl;
      // cout<<s[beg]<<" "<<s[end]<<endl;
      //


      int oldMax = max_mv(mvect)*2+1;
      if(oldMax >= (end-beg+1) ){
        ans = end-beg+1;
        break;
      }
      //case 1 beg
      mvect[s[beg]]--;
      int newMaxLeft = max_mv(mvect)*2+1;
      // cout<<"old = "<<oldMax<<"new = "<<newMaxLeft<<endl;

      if(oldMax == newMaxLeft){
        //then move only the left side ^^
        beg++;
        continue;
      }
      //Here  oldMax is >
      mvect[s[beg]]++; //restore

      //case 2 end
      mvect[s[end]]--;
      end--;
      continue;
      // int newMaxRight = max_mv(mvect);
      // mvect[s[end]]++;

    }
    cout<<ans<<endl;
    /*
    for(int j = 'a' ; j <= 'z' ; j++){
      // if(mvect[j]!=0)
        cout<<mvect[j]<<endl;
    }*/





    // delete [] s;
  }
}


/*
1
19
ydwctkuxfqpyfehkqvl
//*/