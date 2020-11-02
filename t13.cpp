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
string cut5func(string s,int b)
{
  string retS;
  int start,len;
  if( s.length() > ((b+1)*5) ) {//get it full 5
    start = s.length()-5;
    len = 5;
  }
  else if(s.length() > (b*5) ){
    start = 0;
    len = s.length()-(b*5);
  }
  else
    return "0";
  retS = s.substr(start,len);
  return retS;
};
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int num = 0;
  cin >> num;
  std::vector <string> svect;// sset = new string[num];
  std::vector <string> svect2;// to swap
  int maxLen = 0 ;
  for(int i=0;i<num;i++){
    // string 
    string sIn;
    cin >> sIn;
    svect.push_back(sIn);
    if(sIn.length()>maxLen)
      maxLen = sIn.length();
  }

  // for(int i=0;i<num;i++)
  //   cout<<svect[i]<<"\n";

  int round = maxLen/5;
  if(round*5 < maxLen)
    round++;
  for(int i=0;i<round;i++){
    std::vector < pair<int,int> > pvect;
    for(int j=0;j<num;j++){
      pair<int,int> p;
      p.second = j;

      string s = cut5func(svect[j],i);
      p.first = stoi(s);

      pvect.push_back(p);
    }
    // cout<<"will sort"<<endl;
    std::stable_sort(pvect.begin(),pvect.end());
    // cout<<"sortOK"<<endl;
    for(int j=0;j<num;j++){
      string s = svect[pvect[j].second];
      svect2.push_back(s);
      cout<<svect[pvect[j].second]<<" ";
    }
    cout<<"\n";
    pvect.clear();
    svect = svect2;
    /*
    for(int j=0;j<num;j++){
      cout<<pvect[j].first<<endl;
      cout<<pvect[j].second<<endl;
    }
    */
  }
}