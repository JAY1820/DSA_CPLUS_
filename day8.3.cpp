#include <iostream>
using namespace std;

int setbitA(int a)
{
    int count=0;
    while (a!=0)
    {
        if (a&1)
        {
            count++;
        }
        else{
            a=a>>1;  ///2=0010 , 2>>1 ->> 0001
        }
    }
    return count;
}

int setbitB(int b)
{
    int count=0;
    while (b!=0)
    {
        if (b&1)
        {
            count++;
        }
        else{
            b=b>>1;  ///2=0010 , 2>>1 ->> 0001
        }
    }
    return count;
}




int main()
{
  int a,b;
  cin>>a>>b;
  int ans1=setbitA(a);
  int ans2=setbitB(b);
  cout<<"Set bits of A="<<ans1<<endl;
  cout<<"Set bits of B="<<ans2<<endl;
  int ans=ans1+ans2;

  cout<<"Total set bits of A and B are ="<<ans<<endl;


 return 0;
}