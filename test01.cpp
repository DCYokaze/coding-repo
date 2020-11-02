// Write your code here
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void fx(char c)
{
  cout<<"the_c"<<endl;
}
void fx(int l)
{
  cout<<"the_l"<<endl;
}
int main()
{
  short t1 = 7;
  fx(t1);
  return 0;
  int a[10];
  // cout<<"test"<<endl;
  for(int i=0;i<10;i++)
    a[i]=(i+5)*7;
  for(int i=0;i<10;i++)
    cout<<a[i]<<" ";
  cout<<"\n";
  int *i1 = &a[0];
  char *c1; c1 = (char*)&a[0];
  long *lon1; lon1 = (long*)&a[0];
  short *s1; s1 = (short*)&a[0];

  cout<<i1[0]<<endl;
  cout<<c1[0]<<endl;
  cout<<lon1[0]<<endl;
  cout<<s1[0]<<endl;
  cout<<s1[1]<<endl;
  cout<<s1[2]<<endl;

  cout<<"\n\n";
  cout<<i1[0]<<endl;
  i1++;
  cout<<i1[0]<<endl;

  int x=2,y=4;
  int z = x>y?x:y;
  // string zs = x>y?x:y;
  cout<<z<<endl;



  /*
  //test of & 
  int table[5];
  for(int i=0;i<5;i++)
    table[i]=0;
  int v1=table[0];
  v1 = 5;
  for(int i=0;i<5;i++)
    cout<<table[i]<<" ";
  cout<<"\n";
  int& v2=table[0];
  v2 = 7;  
  for(int i=0;i<5;i++)
    cout<<table[i]<<" ";
  cout<<"\n";
  */
}